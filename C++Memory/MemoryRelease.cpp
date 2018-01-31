#include <iostream>
using namespace std;
/*
 * memory release
 * 语句块／函数块执行完毕后，之前分配的内存空间并没有立刻释放掉
 * @bruce
 * 20180131v1
 */

int *foo()
{
    int l = 20;
    return &l;
}

void f1(int *&j) //指针引用
{
    int l = 20;
    int *k = &l;
    j = k;
    k = 0;
}
void any_function_use_local_variables()
{
    int a,b,c;
    a=b=c=100;
}

int main()
{
    int i = 10;
    int *j = &i;

    // 内层语句块中，开辟的被外层指针指向，在语句结束后，空间并没有释放
    if(!0)
    {
        int l = 20;
        int *k  =&l;
        j = k;
        k = 0;
    }
    cout << *j << endl;
/*
 * 第一反应应该是打印出一个不确定的数。
 * 理由是在if语句里，我们定义了k这个变量，在if执行结束之后，这个变量k所占据的内存是被系统收回的，于是也就造成了变量j所指的结果非常不确定。
 * 当然，如果编译并且执行过后，我们发现事情并不是像我们想象的那样，程序最终的打印结果是20，并不是我们期待的一个不确定的数
 *
 * 退出if语句时
 * 此时同时可以看到k的地址是0x00000000，说明k这个变量已经被自动销毁，所以地址指零
 * 而由于此时j的生存周期还没有结束（j是在if意外定义的），所以j指向的这块地址并没有被收回，也就保存下来20这个数了。
 *
 */

    // 调用外部函数，指针指向函数内的临时变量，在函数调用结束后，警告！debug下跟release下不同
    j = &i;
    j = foo();
    cout << *j << endl;
/*
 * address of stack memory associated with local variable 'l' returned
 * 执行的结果，在debug下，是20；在release下，结果是4198795，显然那部分内存被释放掉了。
 * 因为在debug的程序里面，执行完函数foo，并没有立即释放掉l的那个地址。
 * 在这个程序的release版本中，显然程序释放了那部分的地址，所以指向了一个不确定的数。
 *
 */

    j = &i;
    f1(j);
    cout << *j << endl; //20
    any_function_use_local_variables();
    cout << *j << endl; //100
    return 0;
}



