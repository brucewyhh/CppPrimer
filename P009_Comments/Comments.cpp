#include <iostream>
#include <string>
/*
 * comments Test
 */
int main()
{
    std::cout << /* "*/" /* "/*" */;
}


// /* 1.注释合法情况测试一(数字)
//  * int i = 0;         ok
//  * int /**/ a = 0;    ok
//  * int b /**/ = 0;    ok
//  * /**/ int c = 0;    ok
//  * in/**/t d = 0;     error,不能分隔关键字;
//  * int e = /**/ 0;    ok
//  * int f = 0 /**/;    ok
//  * int g = 2/**/3;    error,不能分隔数字串;
//  */

// /* 2.注释合法情况测试二(字符串)
//  * std::string a = "/*comments*/Hello world";    ok,双引号内侧的注释被当成字符串一部分;
//  */

// /*
//  * 3.界定符对注释(/* */)必须完整，无论在程序的什么地方;
//  */