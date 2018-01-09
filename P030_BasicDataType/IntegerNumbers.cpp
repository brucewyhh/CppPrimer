#include <iostream>
#include <cstdio>
using namespace std;
/**
 * 无符号整型数的运算 & 有符号数的运算
 * @bruce
 * 20180109v1
 */

int main()
{
    uint8_t a = 255; // 8bit最大无符号数
    uint8_t b = -9;  // 加法逆元
    uint8_t c = ~9;  // 按位取反
    printf("9 加法逆元 = %d\n", b); // 247  (255 - 9 = 247)||有符号数转无符号数
    printf("9 按位取反 = %d\n", c); // 246

    int8_t d = -128; // 8bit最大有符号数
    int8_t e = -d;   // 有符号数的加法逆元
    printf("-128 加法逆元 = %d\n", e);  // -128(是其本身, -128 + -128 + 256 = 0)
    int8_t f = -127;
    int8_t g = -f;
    printf("-127 加法逆元 = %d", g);  // 127( 127+ [-127] = 0)
    return 0;

}