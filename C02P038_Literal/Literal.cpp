#include <iostream>
#include <cstring>
/*
 * the usage of all kinds of literal
 * @bruce
 * 20180114v1
 */

int main()
{
    // - - - - - - -  整型字面值  - - - - - - //
    std::cout << -27 << std::endl;
    std::cout << -033 << std::endl;
    std::cout << -0x1B << std::endl;

    std::cout << sizeof(9) << std::endl;   // 4byte int
    std::cout << sizeof(9L) << std::endl;  // 8byte long
    std::cout << sizeof(3232323232323) << std::endl;  // 8byte long
//    std::cout << sizeof(32393232524243343434) << std::endl; // 超过可表示的最大整型数, compile error

    // - - - - - - - 浮点字面值  - - - - - - - - //
    std::cout << 3.14159 << std::endl;
    std::cout << sizeof(3.14159) << std::endl; // 8byte
    std::cout << 3.14159f << std::endl;
    std::cout << sizeof(3.14159f) << std::endl; // 4byte
    std::cout << 3.14169L << std::endl;
    std::cout << sizeof(3.14159L) << std::endl; // 16byte

    // 3.14159
    std::cout << 0.314159E1 << std::endl;
    std::cout << 31.4159E-1 << std::endl;
    std::cout << 3.14159E0   << std::endl;
    // 0.0
    std::cout << 0.  << std::endl;
    std::cout << 0e0 << std::endl;
    std::cout << .0  << std::endl;

    // - - - - - - - 字符字面值  - - - - - - - //
    std::cout << 'a' << std::endl;
//    std::cout << '' << std::endl;  // 编译错误, 空字符常量 empty character constant
    std::cout << '\0' << std::endl;      //  空字符
    char a = 0;
    std::cout << a << std::endl; //   空字符
    std::cout << sizeof(a) << std::endl;  // 1byte

    std::cout << ' ' << std::endl;  // 空格字符
    std::cout << '\40' << std::endl;
    /*
     * 1.  在c语言中空字符用'\0'表示
     * 2. '\0'对应的整型值是0，所以给一个字符变量赋值为空字符时，以下两种都是可以的
     *   char ch='\0';
     *   char ch=0;
     */

    std::cout << sizeof('a') << std::endl; // 1byte
    std::cout << sizeof(L'a') << std::endl; //4byte

    std::cout << '\123' << std::endl; // S
    std::cout << '\12' << std::endl;  // 换行符


    // - - - - - - - 字符串字面值 - - - - - //
    /*
     * strlen 求出的是字符产字面值的字符长度。
     * sizeof 求出的是字符串字面值所占的内存。
     */
    std::cout << "hello长度 " << strlen("hello") << std::endl;   // 5个字符
    std::cout << "hello占内存 " << sizeof("hello") << std::endl; // 6byte



    // 字符串字面值连接
    std::cout << "Hello"
              " World"
              " !!!"
              << std::endl;

    // 多行字面值
    std::cou\
t<<"hi"<<std::end\
l;

}

/*
 * TODO printf("%d", 234); printf("%f,%d", 4e4, 4);字面值常量如何在内存中存储，压栈？出栈？
 *
 */