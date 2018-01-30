#include <iostream>
/**
 * read a variable number of input data
 * @bruce
 * 20171230v1
 */
int main()
{
    int sum = 0;
    // Example of "for"
    for(int value = 0; std::cin >> value; sum+=value);
    std::cout << sum << std::endl;

}

/*
 * istream 对象作为条件，用来检测流的状态
 * 遇到文件结束符(EOF)或无效输入(非整型数)，istream对象的状态变为无效
 */

/*
 * Example of "while"
 * int sum = 0, value = 0;
 *
 * while (std::cin >> value)
 *     sum += value;
 * std::cout << sum << std::endl;
 * return 0;
 */
