#include <iostream>
using namespace std;
/*
 * declaration 声明：变量的类型和名称；
 * @bruce
 * 20180117v1
 */

int main()
{
    extern int a;
    cout << a << endl;
}

/*
 * extern关键字用来声明变量的类型和名字
 *
 * 一个变量可以多次声明
 *
 * 只有当extern声明位于函数外部时，才可以有显式初始化
 *
 * 任何包含了显式初始化的声明(declaration)即为定义(definition)
 */
