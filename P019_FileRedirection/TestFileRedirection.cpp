#include <iostream>

int main()
{
    int num1 = 0, num2 = 0;
    std::cin >> num1 >> num2;
    std::cout << num1 + num2 << std::endl;
    return 0;
}

/*
 * 提示:编译c++代码需要用g++命令
 * g++ TestFileRedirection.cpp
 * 实现文件重定向:
 * ./a.out <infile >outfile
 */