#include <iostream>
using namespace std;
/*
 * 函数参数压栈顺序
 * @bruce
 * 20180117v1
 */
void func(int a, char s[], int b)
{
    cout << " &ib = " << &b << endl;
    cout << " &ca = " << &s << endl;
    cout << " &ia = " << &a << endl;
    return;
}
int main()
{
    int ia = 0x22222222;
    int ib = 0x11111111;
    cout << &ia << endl; //高地址
    cout << &ib << endl; //低地址(高-4)
    char ca[] = "abc";
    cout << &ca << endl; //更低地址(字符串长度3 + 空字符1)
    char cb[] = "abcd";
    cout << &cb << endl; //(字符串长度4 + 空字符1)

    func(ia, ca, ib); //TODO 函数压栈顺序由编译器决定

}
/*
 * 0x7fff52253b0c
 * 0x7fff52253b08
 * 0x7fff52253b04
 * 0x7fff52253aff
 * 从高地址到低地址
 *
 * 第一，参数压栈的顺序是从右到左，对应到上面的代码也就是先压ib,然后是ca，最后是ia。
 * 第二，栈空间是从高地址向低地址发展的。
 *
 * &ib = 0x7fff56571a7c
 * &ca = 0x7fff56571a80
 * &ia = 0x7fff56571a8c
 * 从低地址到高地址，证明该编译器是从从左向右压栈
 */