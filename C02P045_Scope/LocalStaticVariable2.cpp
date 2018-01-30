#include <iostream>
#include <cstdio>
using namespace std;

/*
 * local static variable 生存周期
 * printf 执行过程
 * @bruce
 * 20180117v1
 */

int test(int n)
{
    static int count = n;
    cout << count << " - " << n << endl;
    return count + n;
}

int main()
{
    printf("%d, %d\n", test(4), test(5));



    return 0;
}

/*
 *
 *
 *
 */