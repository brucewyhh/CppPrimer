#include <iostream>
#include <cstdlib>
using namespace std;
/*
 * 指针 pointer
 * @bruce
 * 20180130v1
 */

int main()
{
    double dval;
    double *pda = &dval;
    cout << dval << endl;
    cout << &dval << endl;
    cout << pda << endl;       // 指针变量存放的是地址，  pda是指向dval的指针 =  pda存放变量dval的地址
    double *pdb = pda;

    //int *pia = pda;          // 错误， 指针的类型要与它所指向的对象严格匹配

    //int *pia;
    //pia = &dval;             // 错误， 指针的类型要与它所指向的对象严格匹配

    // 空指针 null pointer
    int *p1 = nullptr;
    int *p2 = 0;

    int *p3 = NULL;           //引入 cstdlib 库

    return 0;


}