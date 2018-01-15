#include <iostream>
#include <cstring>
#include <vector>
#include <map>
using namespace std;
/*
 * 值初始化 value initialization
 * @bruce
 * 20180115v1
 */

int count_calls()
{
    static int ctr = 0; //局部静态变量，在调用结束后，该值仍然有效
    return ++ctr;
}

int main()
{
    for (int i = 0; i != 10; ++i)
    {
        cout << count_calls() << endl;
    }
    return 0;
}