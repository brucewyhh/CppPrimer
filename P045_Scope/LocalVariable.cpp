#include <iostream>
using namespace std;

/*
 * local variable 生存周期
 * @bruce
 * 20180118v1
 */

class World
{
public:
    World(int id):identifier(id)
    {
        cout << "Hello from " << id << endl;
    }
    World():identifier(0)
    {
        cout << "Hello from default 0" << endl;
    }
    ~World()
    {
        cout << "Bye from " << identifier << endl;
    }
private:
    const int identifier;
};

int main()
{
    World oneWorld(1);

    for (int i = 2; i != 5; ++i) // 每次循环都会重新创建并被销毁。
    {
        World newWorld(i);
    }

    World fiveWorld(5);

    // - - - - redefinition of 'i':  if()里的i的作用域是 if 里的所有块。各自块里的 i的作用域仅限于各自的块。
//    if (int i = 0)
//    {
//        int i = 20;
//    }
//    else
//    {
//        int i = 30;
//    }

    // - - - -
    if (true)
    {
        int i = 20;
    }
    else
    {
        int i = 30;
    }

    return 0;
}

/*
 *
 */