#include <iostream>
#include <cstdlib>
using namespace std;
/*
 * 指针 pointer
 * @bruce
 * 20180130v1
 */
void func(int *num)
{
    cout << "this is the ptr function..." << endl;
}

void func(int num)
{
    cout << "this is the normal function..." << endl;
}

int main(int argc, char** argv)
{
    //func(NULL);
    func(nullptr);
    func(0);

    char *p1 = nullptr;     // 正确
    int  *p2 = nullptr;     // 正确
    bool b = nullptr;       // 正确. if(b)判断为false
    // int a = nullptr;     // error,nullptr不能被转换为整数

    return 0;
}

/*
 * NULL在C中的定义.在C中，NULL通常被定义为如下：
 * #define NULL    ((void *)0)
 * 也就是说NULL实质上是一个void *指针。
 * 那么问题又来了，我们从一开始学习C++的时候就被告诫C++是兼容C的，
 * 在C++中，NULL却被明确定义为整常数0：
 * 为什么C++在NULL上选择不完全兼容C？
 * 根本原因和C++的重载函数有关。C++通过搜索匹配参数的机制，试图找到最佳匹配（best-match）的函数，而如果继续支持void*的隐式类型转换，则会带来语义二义性（syntax ambiguous）的问题。
void foo(int i);
void foo(char* p)
foo(NULL); // which is called?

 * C++把NULL定义为0，解决了函数重载后的函数匹配问题，但是又引入了另一个“问题”，同样是上面这段代码：
 * 由于我们经常使用NULL表示空指针，所以从程序员的角度来看，Func（NULL）应该调用的是Func（char *）
 * 但实际上NULL的值是0，所以调用了Func（int）。nullptr关键字真是为了解决这个问题而引入的。
 *
 * 另外我们还有注意到NULL只是一个宏定义，而nullptr是一个C++关键字。
 */

