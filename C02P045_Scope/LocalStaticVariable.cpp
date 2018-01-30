#include <iostream>
using namespace std;

/*
 * local static variable 生存周期
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

void test(int n)
{
    static Sample obj(n);
}

void test_another(int n)
{
    static Sample obj(n);
}

int test_add(void)
{
    static int num = 0;
    ++num;
    return num;
}
int main()
{
    cout << "main is starting" << endl;
    test(2);
    test(3);
    test_another(4);
    test_another(5);
    cout << "Test local static adding - - - -" << endl;
    for (int i = 0; i != 3; ++i)
        cout << test_add() << endl;
    cout << "main is ending" << endl;

}

/*
 * main is starting
 * constructing object:x=2
 * constructing object:x=4
 *
 * Test local static adding - - - -
 * 1
 * 2
 * 3
 **** 静态局部变量只会被初始化一次，因此第一次调用函数的时候num被初始化为0
 **** 然后每次调用的时候++num，第一次调用++num为1；第二次++num为2......
 **** 静态局部变量的生命期是整个程序因此值可以保存下来
 * main is ending
 *
 * 4 is destroying
 * 2 is destroying
 */

