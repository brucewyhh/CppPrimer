#include <iostream>
using namespace std;
/**
 * The solution of which type does (plain) char type represent(signed or unsigned)
 * char depends on the compiler.
 * @bruce
 * 20180104v1
 */

void char_type()
{
    char c = 0xFF;
    if (c == -1) {
        cout << "signed" << endl;
    } else if (c == 255 ) {
        cout << "unsigned" << endl;
    } else {
        cout << "error" << endl;
    }
}

int main()
{
    char_type();
    return 0;
}

/*
 * 在C/C++语言中，char变量为一个字节，8位，
 * signed char表示的范围：-128~127【-128在内存中的二进制表示为1000 0000，127在内存中的表示为0111 1111】；
 * unsign char表示的范围：0000 0000~1111 1111，即0~255；
 *
 * 注意：整数在内存中是以补码存取的，正数的补码：等于自己，负数的补码：取反加1，
 * 例如：127在内存中表示为0111 1111， -127在内存中表示为~(0111 1111)+1=1000 0001；
 * 假定某内存单元p的内容是1111 1111，那么它一定是255吗？
 * 实际上取决于你的代码是要把它看成有符号还是无符号数，
 * 如果是无符号则表示255，如果是有符号则表示-1【对于有符号数，最高位为符号位，1表示负，0表示正】：
 */
