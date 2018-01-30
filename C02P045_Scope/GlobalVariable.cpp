#include <iostream>
using namespace std;

/*
 * global variable 生存周期
 * @bruce
 * 20180117v1
 */

class Global
{
public:
    Global()
    {
        std::cout << "Global is constructed" << std::endl;
    }
    ~Global()
    {
        std::cout << "Global is destroyed" << std::endl;
    }
};

Global test_global;

int test = 99;
int main()
{
    std::cout << "main is running" << std::endl;
    int test = 10;
    std::cout << test << std::endl;
    std::cout << ::test << std::endl;
    return 0;
}

/*
 * Global is constructed
 * main is running
 * Global is destroyed
 */