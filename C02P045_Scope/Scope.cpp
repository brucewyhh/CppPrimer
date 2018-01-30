#include <iostream>
using namespace std;
/*
 * 变量作用域
 * @bruce
 * 20180117v1
 */
int j = 42;
int main()
{
    int i = 100, sum = 0;
    for (int i = 0; i != 10; i++) // for 内层作用域inner scope,覆盖外层作用域outer scope
        sum += i;
    cout << i << " " << sum << endl;

    int m = j, j;
    j = 23;
    cout << m << " " << j << endl;
}