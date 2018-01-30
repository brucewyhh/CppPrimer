#include <iostream>
#include <cstdio>
using namespace std;
/**
 * 数据类型转换
 * @bruce
 * 20180130v1
 */
int main()
{

    double d1 = 0.6;
    float f1= d1;
    printf("%.11f\n", f1);
    printf("%.11f\n", d1);
    cout << sizeof(d1) << endl;
    return 0;
}
/*
 * TODO 1.double转float机器级表示及转换过程
 * TODO 2.打印内存中的二进制表示
 * http://blog.csdn.net/tingzhushaohua/article/details/76691395
 */