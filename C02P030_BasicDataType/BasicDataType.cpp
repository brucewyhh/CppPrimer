#include <iostream>
using namespace std;
/**
 * the size of basic data type
 * @bruce
 * 20180102v1
 */
int main()
{
    cout << "The size of bool is  " << sizeof(bool) << " ; "<< endl; // 1byte

    cout << "The size of char is  " << sizeof(char) << " ; "<< endl; // 1byte
    cout << "The size of wchar_t is  " << sizeof(wchar_t) << " ; "<< endl; // 4byte
    cout << "The size of char16_t is  " << sizeof(char16_t) << " ; "<< endl; // 2byte
    cout << "The size of char32_t is  " << sizeof(char32_t) << " ; "<< endl; // 4byte

    // short int = short
    cout << "The size of short is  " << sizeof(short) << " ; "<< endl; // 2byte
    cout << "The size of int is  " << sizeof(int) << " ; "<< endl; // 4byte

    // long int = long
    cout << "The size of long is  " << sizeof(long) << " ; "<< endl; // 8byte

    // long long int = long long
    cout << "The size of long long is  " << sizeof(long long) << " ; "<< endl; // 8byte

    cout << "The size of float is  " << sizeof(float) << " ; "<< endl; // 4byte
    cout << "The size of double is  " << sizeof(double) << " ; "<< endl; // 8byte
    cout << "The size of long double is  " << sizeof(long double) << " ; "<< endl; // 16byte


    int a = 200*300*400*500; // overflow 溢出
    cout << "200*300*400*500 = " << a << endl;
    cout << "500*400*300*200 = " << 500*400*300*200 << endl;
    cout << "(200*300)*400*500 = " << (200*300)*400*500 << endl;
    cout << "200*(300*400)*500 = " << 200*(300*400)*500 << endl; // 利用交换律和结合律，结果一致;
    unsigned b = a;
    cout << b << endl;


    double c = (3.14+1e20)-1e20; // 精度有限，结合律失效;
    double d = 3.14+(1e20-1e20);
    cout << "(3.14+1e20)-1e20 = " << c << endl;
    cout << "3.14+(1e20-1e20) = " << d << endl;
    return 0;
}
/*
 * 空类型void，一般用作函数返回类型，
 * 或者void指针(void *：无类型指针，可以指向任意类型的数据。可用任意数据类型的指针对void指针赋值，因此常用void指针来作为函数形参，这样函数就可以接受任意数据类型的指针作为参数)
 */