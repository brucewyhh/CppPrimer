#include <iostream>
#include <cstring>
#include <vector>
#include <map>

/*
 * 列表初始化 list initialization
 * @bruce
 * 20180115v1
 */

int main()
{
    // - - - - - - - - - 列表初始化 内置类型 - - - - - - - - - -//
    int ia{1};
    int ib = {1};

    std::vector<int> va{1, 2, 3};
    std::vector<int> vb = {1, 2, 3};

    std::map<int, float> ma{{1, 1.4f}, {2, 3.3f}};
    std::map<int, float> mb = {{1, 1.4f}, {2, 3.3f}};

    // - - - - - - 列表初始化 防止隐式转换，数据收窄 - - - - - - //
    int i1(5.3);      //ok，warning，i1=5
    int i2 = 5.3;     //ok，warning，i2=5
    //int i3{5.3};    //error：double->int
    //int i4 = {5.3}; //同上

    char c1{7};       //ok
    //char c2{99999}; //error：int->char

    std::vector<int> v1{1,2,3,4,5};     //ok
    //std::vector<int> v2{1,2,3,4,5.6}; //error：double->int

    float fa = 1e40;       //ok，double->float
    //float fb = {1e40};   //error：浮点数字面值常量超过float能表示的范围
    double fc = 1.6;
    //float fd{fc};          //TODO error, 变量double->float,   变量与常量在处理时有什么区别

    unsigned long long ulla = -1;
    float fe = ulla;             //将-1（0xFFFFFFFF）强转，再隐式转成float
    //float ff = {ulla};         //error,超过float范围
    float fg = 1ull;             //将1强转，再隐式转成float

    float fh = {2147483647};     //int32最大值10^9, ok
    int imax = 2147483647;
    float fi{imax};              //TODO error

    const int x = 1024, y = 1;  //注意x，y被const修饰
    char c = x;                 //ok
    //char d = {x};               //error: int->char
    char e = y;                 //ok
    char f = {y};               //TODO ok。如果y为int型，则该行会出错。但由于加了const并且值为1。编译器认为这样的转换是安全的


    return 0;
}