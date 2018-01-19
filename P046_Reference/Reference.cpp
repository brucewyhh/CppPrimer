#include <iostream>
using namespace std;
/*
 * 对象的引用 &
 * @bruce
 * 20180119v1
 */

int main()
{
    int ia_val = 1024;
    int &ia_ref_val = ia_val;

    // int &ib_ref_val; //引用必须被初始化

    // char &ca_rel_val = ia_ref_val; // 引用类型必须与被引用对象的类型严格匹配

    // int &id_ref_val = 1299;
    // int &ie_rel_val = ia_val * 2;  // 引用类型不能与字面值或者某个表达式计算结果绑定在一起

    int if_val = 512;

    cout << &ia_val << endl;
    cout << &ia_ref_val << endl;
    cout << &if_val << endl;

    return 0;
}

/*
 *    ia_val   0x7fff5b4a1b18
 *             0x7fff5b4a1b14
 *             0x7fff5b4a1b10
 *    if_val   0x7fff5b4a1b0c
 *    64bit pointer 8byte
 *    TODO 引用如何底层实现:应该是指针
 */