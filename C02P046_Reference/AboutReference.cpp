#include <iostream>
using namespace std;
/*
 * 对象的引用 & 进一步探究
 * @bruce
 * 20180119v1
 */

void func()
{
    int x = 1024;
    int &rx = x;
    int *pa = &x;
    int *pb = &rx;
    cout << " x[addr] = " << pa << endl;
    cout << "rx[addr] = " << pb << endl;
    return;
}

int func_inner()
{
    int x = 0;
    int *ptr = &x;
    int &rx = x;
    rx = 1;
    return x;
}
int main()
{
    func();
    func_inner();
    return 0;
}

/*
 * 在语言层面上，占用内存的变量都可以称之为对象。
 * 通过func函数，引用在语言层面上不占内存。
 * 本质上，引用和指针没有区别。只不过在语言层面上，C++设计者将通过指针来操作引用的实现细节隐藏了。不过，我们依然可以肯定：
 * （1）定义一个引用就是定义一个指针，这个指针保存引用对象的地址，且指针类型为const，不可以再指向其他对象；
 * （2）每次对引用变量的使用，实际都伴随着解引用，只是我们看不到符号*；
 *
 */
