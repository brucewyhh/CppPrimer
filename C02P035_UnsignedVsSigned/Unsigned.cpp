#include <iostream>
using namespace std;
/*
 * the diff between unsigned and signed
 * @bruce
 * 20180112v1
 */

int main()
{
    unsigned u = 10;
    int i = -42;
    cout << i + i << endl; // -84;
    cout << u + i << endl; // (-32)int转为unsigned后相加

    unsigned u1 = 42, u2 = 10;
    cout << u1 - u2 << endl; // 32;
    cout << u2 - u1 << endl; // (-32)unsigned不会小于0

    unsigned u3 = 10, u4 = 42;
    cout << u4 - u3 << endl; // 32;
    cout << u3 - u4 << endl; // (-32)

    int i1 = 10, i2 = 42;
    cout << i2 - i1 << endl; // 32;
    cout << i1 - i2 << endl; // -32;
    cout << i1 - u3 << endl; //  0;
    cout << u3 - i1 << endl; // 0;
    return 0;
}