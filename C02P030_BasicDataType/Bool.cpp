#include <iostream>
using namespace std;
/*
 * The usage of Boolean type in C++
 * @bruce
 * 20180112v1
 */
bool check(int a, int b)
{
    if (a == b)
        return true;
    else
        return false;
}

bool check_n(int a, int b)
{
    bool ret = true;
    if (a != b)
        ret = false;
    return ret;
}

int main()
{
    bool a = 100;
    bool b = false;
    cout << a<< endl;
    cout << b << endl;
    cout << check(a, b) << endl;

    int i = 40;
    if (i)
        cout << i << endl;

    return 0;
}
/*
 * 1. 当表达式需要一个算术值时, 布尔类型都被隐式地提升成 int, false变成 0, 而 true变成 1
 *
 * 2. 如果有必要算术值和指针值也能隐式地被转换成布尔类型的值 0或空指针被转换成 false, 所有其他的值都被转换成 true
 *
 * 3. 使用bool类型建议:
 * 3.1. 不要使用位运算符
 *   从理论上讲，对于bool类型只需要一个比特（bit）就够了，根本不需要一个字节，即使使用一个字节甚至四个字节，一般的也只需要用到其中一位。
 *   假设使用最低位，那么使用逻辑运算符&&、||、!与使用位运算符&、|、~效果是一样的，但是看起来还是有些怪怪的，有专门为之设计的运算符为什么不用呢？
 *   所以对于逻辑操作应该使用逻辑运算符，不要使用位运算符搞怪。
 * 3.2. 使用! 运算符的别名not
 *   对于条件执行语句if的条件表达式，最好使用if( ! cond ) 或if( cond )
 *   而不要使用if( cond == true)或if( cond == false)，避免不小心写成if(cond = true)或if(cond = false)造成程序逻辑错误。
 *   如果你用的编译器支持运算符!的别名not，而你也想提高可读性则可以使用not替换!运算符，写作if( not true)，而且鼓励这样写。
 *   not是C++标准的关键词，但如果您的代码要求可移植性比较高，还是不要使用该关键词，因为有些编译器可能不支持该特性。
 *   如果您还是喜欢用not，同可以使用#define预处理指令定义为宏。当然对于&&和||、^您都可以使用其别名：and、or、xor。
 * 3.3 怎样返回一个bool类型?
 *   答：在方法里面先定义一个bool值，确保每种情况都有一个返回值。
 *
*/