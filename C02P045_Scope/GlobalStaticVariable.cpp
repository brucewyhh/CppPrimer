#include <iostream>
using namespace std;

/*
 * global static variable 生存周期
 * @bruce
 * 20180117v1
 */

class Sample
{
public:
    Sample()
    {
        cout << "constructing without para" << endl;
    }
    Sample(int a)
    {   x=a;
        cout<<"constructing object:x="<<x<<endl;
    }
    ~Sample()
    {
        cout << x << " is destroying" << endl;
    }
private:
    int x;
};

static Sample obj;

static int static_int = 9;

static int value;

void test(void)
{
    value = 0;
    ++value;
}
int main()
{
    cout << "main is running" << endl;
    cout << static_int << endl;

    static int static_int = 11;
    if (true)
    {
        static int static_int = 12;
        cout << static_int << endl;
    }
    cout << static_int << endl;

    cout << "Test global static - - -" << endl;
    for (int i =0; i != 3; ++i)
    {
        test();
        cout << value << endl;
    }
    return 0;
}

/*
 * constructing without para
 * main is running
 * 9
 * 12
 * 11 内层作用域中可重复定义
 *Test global static - - -
 * 1
 * 1
 * 1
 **** 静态全局变量可以被初始化多次，因为每次调用G函数都会对静态全局变量初始化为0
 **** 每次value的值都初始化为0，++value为1，因此输出的值为1
 * 0 is destroying
 */