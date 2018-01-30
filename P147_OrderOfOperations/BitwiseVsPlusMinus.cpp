#include<iostream>
#include<cstdio>
using namespace std;
/*
 * 位运算符优先级 vs 加减运算符
 * @bruce
 * 20180130v1
 */
int main()
{
    int a=10;
    printf("%d %d\n",a>>2,a-a>>2);   //2 0
    printf("%d %d\n",a>>2,a-(a>>2)); //2 8
    return 0;
}
/*
 * ‘-’运算符比‘>>’运算符优先级高
 */