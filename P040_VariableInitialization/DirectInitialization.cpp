#include <iostream>
#include <cstring>
#include <vector>
#include <map>

/*
 * 直接初始化 direct initialization
 * @bruce
 * 20180115v1
 */

class ClassTestNormal
{
public:
    ClassTestNormal(int n)
    {
        number = n;
        std::cout << "normal" << std::endl;
    }//普通构造函数
private:
    int number;
};

class ClassTestExplicit
{
public:
    explicit ClassTestExplicit(int n)
    {
        number = n;
        std::cout << "explicit" << std::endl;
    }//explicit(显式)构造函数
private:
    int number;
};

int main()
{
    // - - - - - - - 直接初始化 vs 复制（拷贝）初始化 - - - - - - - //
    ClassTestNormal t1 = 3;     //隐式调用其构造函数，成功
    ClassTestNormal t2(3);      //显式调用其构造函数，成功

    //ClassTestExplicit t2 = 3; //编译错误,不能隐式调用其构造函数
    ClassTestExplicit t3(3);    //显式调用其构造函数，成功

    // - - - - - - - 直接初始化 - - - - - - - - //
    std::string s1("abc");   //abc
    std::string s2();        //空字符串
    std::string s3(10, 'c'); //cccccccccc
    std::cout << s3 << std::endl;

}