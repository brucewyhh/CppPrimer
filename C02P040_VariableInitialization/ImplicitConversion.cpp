#include <iostream>
#include <cstring>
#include <vector>
#include <map>
#include <typeinfo>
using namespace std;

/*
 * 隐式类型转换
 * @bruce
 * 20180115v1
 */

class MyString
{
public:
    MyString(const char* p) {
        cout << "string:" << p << endl;
    } //用c风格的字符串作为初始化值
    MyString(int n){
        cout << n << " bytes for string" << endl;
    } //本意是预先分配n个字节给字符串
};

class Test
{
public:
    // explicit
    explicit Test(int a)
    {
        m_val = a;
    }
    bool isSame(Test other)
    {
        return m_val == other.m_val; //TODO 类对象的私有对象怎么能访问得到呢？（在类的声明中为什么能够访问类对象的私有成员）
    }

private:
    int m_val;


};
int main()
{
    // - - - - - - - - - - 基本数据类型 - - - - - - - - //
    char ca = 1;
    unsigned char uca = 127; // 1000 0001
    cout << (typeid(ca+uca) == typeid(int)) << endl; //singed char, unsigned char -> int

    short sa = 0;
    unsigned short sb = 1;
    cout << (typeid(sa+sb) == typeid(int)) << endl;  //short,unsigned short -> int

    int ia = -1;
    unsigned uia = 1;
    cout << (typeid(uia + ia) == typeid(unsigned int)) << endl; // int -> unsigned int


    // - - - - - - - - 类类型  - - - - - - - - - //
    MyString mystra = "hello";      //隐式转换，等价于MyString mystra = MyString("hello");

    MyString mystrb(10);            //分配10个字节的空字符串
    MyString mystrc = MyString(10); //分配10个字节的空字符串

    MyString mystrd = 10;           //编译通过，分配10个字节的空字符串
    MyString mystre = 'a';          //编译通过，分配'a'(97)个字节的空字符串


    Test ta(10);
    cout << ta.isSame(10) << endl;  //true, 隐式转换，产生了一个临时Test对象
    // C++中提供了explicit关键字，在构造函数声明的时候加上explicit关键字，能够禁止隐式转换

}