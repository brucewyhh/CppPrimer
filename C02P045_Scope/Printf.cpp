#include <iostream>
#include <cstdio>
using namespace std;

/*
 * 探究 printf 执行过程
 * @bruce
 * 20180118v1
 */
int main()
{

    int i = 1;

    printf("%d, %d, %d\n", i, i++, ++i);

    printf("%d\n", i);

    cout << endl;


    float n1 = 3.0;

    double n2 = 3.0;

    long int n3 = 2000000000;

    long int n4 = 1234567890;

    printf("%ld, %ld, %ld, %ld", n1, n2, n3, n4);

    int a = 1, b = 2, c = 3;
    printf("%d, %d, %d\n", a + b + c, b = b + c, c = c + 3);

    int i = 3;
    printf("%d, %d, %d, %d\n", i++, ++i, i, i++);
    printf("%d\n",i);
}

/*
 * TODO printf 函数函数压栈 与 函数打印格式与数据读出
 */