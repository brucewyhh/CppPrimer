#include <iostream>
using namespace std;
/*
 * 位运算符优先级 vs 加减运算符
 * @bruce
 * 20180130v1
 */

int main()
{

    int *a = new int[2];
    a[0]=9;
    a[1]=10;
    int *b = new int[2];
    b[0]=90;
    b[1]=100;

    *a++ = *b++;

    cout << a[0] << " " << a[1] << endl;
    cout << b[0] << " " << b[1] << endl;


}
// TODO 字符串复制语句 while(*a++=*b++)
/*
 * (*a++=*b++)等价于
 * *a=*b;
 * a++;
 * b++;
 */