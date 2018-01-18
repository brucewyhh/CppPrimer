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

    cout << endl;   // TODO 如何执行


    float n1 = 3.0;

    double n2 = 3.0;

    long int n3 = 2000000000;

    long int n4 = 1234567890;

    printf("%ld, %ld, %ld, %ld", n1, n2, n3, n4); //TODO why

    int a = 1, b = 2, c = 3;
    printf("%d, %d, %d\n", a + b + c, b = b + c, c = c + 3);

    int i = 3;
    printf("%d, %d, %d, %d\n", i++, ++i, i, i++);
    printf("%d\n",i);
}