#include <iostream>
#include <zconf.h>

/**
 * The Example of output when the buffer is flushed
 * @bruce
 * 20171229v1
 */

int main()
{
    std::cout << "Hello I'm here" << std::endl;

    std::cout << "Next I'm...\n";
    sleep(5);
    std::cout << "Coming !" << std::endl;
    return 0;
}

/*
===== 测试结果：
 第一行代码立刻输出；
 第二行代码根本就没有立刻输出，只是在缓存器中，在sleep结束后，才进行输出。
 */