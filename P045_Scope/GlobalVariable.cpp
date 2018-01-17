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

int main()
{
    std::cout << "main is running" << std::endl;
    return 0;
}

/*
 * Global is constructed
 * main is running
 * Global is destroyed
 */