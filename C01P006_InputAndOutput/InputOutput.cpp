#include <iostream>
/*
 * The Example of Input and Output
 * @bruce
 * 20171229v1
 */


/*
 * ERROR:
 * 一般地，所有#include指令都放在源文件的开始位置
 * include指令与头文件的名字必须写在同一行
#include
<iostream>
 */

int main()
{
    int num1 = 0, num2 = 0;
    std::cout << "Enter tow numbers:"  << std::endl;
    std::cin >> num1 >> num2;
    std::clog << num1 << " + " << num2;
    std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
    return 0;
}
/*
1.在C++中，一个表达式产生一个计算结果，表达式通常由一个或多个运算对象和一个运算符组成。
2.输出运算符(<<),操作：将运算符右侧的值写给到左侧的ostream对象中，
                计算结果：左侧的运算对象，即写入定值的ostream对象
3.字符串（string）为符号或数值的一个连续序列
  字符串字面值(string literal)是一串常量字符，
  字符串字面值常量用双引号括起来的零个或多个字符表示，为兼容C语言，C++中所有的字符串字面值都由编译器自动在末尾添加一个空字符。
  字符串没有变量名字，自身表示自身。
  vs
　字符字面值：
 'A' //single quote:character literal字符字面值：
 "A" //double quote:character string literal.包含字母A和空字符的字符串
4.空字符：字符串结尾的标志（‘\0’），实际上他的数值是0。 可以理解为标志性字符型，其使命主要是为了表明字符串已经结束。
  vs
  空格字符：空格字符（‘ ’单引号中间有一个空格）的ASCII码10进制32，16进制的0X20
  两者区别：
    最直观的区别：值不同两者的ASCII不同，空（NUL）字符码值是0，而空格字符的码值是32。
    再者，空字符人为规定了它的使命。
5.cout << endl 相当于 cout << '\n'; flush();
  在没有必要刷新输出流的时候应尽量使用cout << ‘\n’, 过多的endl是影响程序执行效率低下的因素之一.
  The endl manipulator produces a newline character, exactly as the insertion of '\n' does;
  but it also has an additional behavior:
  the stream's buffer (if any) is flushed(冲刷),
  which means that the output is requested to be physically written to the device, if it wasn't already.
  This affects mainly fully buffered streams, and cout is (generally) not a fully buffered stream.
  Still, it is generally a good idea to use endl only when flushing the stream would be a feature and '\n' when it would not.
  Bear in mind that a flushing operation incurs(引发) a certain overhead(系统开销), and on some devices it may produce a delay.
6.关于输出：
  (1)缓冲区满，输出 This affects mainly fully buffered streams, and cout is (generally) not a fully buffered stream.
  (2)程序结束，输出
  (3)主动刷新，输出
  (4)换行符，输出
7.关于缓冲区：
  缓冲区(buffer)源自当计算机的高速部件与低速部件通讯时,必须将高速部件的输出暂存到某处,以保证高速部件与低速部件相吻合。
  一般缓冲区用于跟外设接口，比如输入的键盘、输出到屏幕、输出到文件、串并口、网络等等，主要原因是CPU工作速度和总线传送速度远远快于这些外设的处理速度，
  为了不让CPU处于长时间等待状态，通常采用中断方式来处理，但为了提高效率，减少中断的次数，cpu一次把能处理的一批数据传送给外设，然而外设又不能同步处理
  这些数据，这样就产生了缓冲区，cpu把数据送到缓冲区，外设到缓冲区取数据进行处理。用这种方式来保持cpu跟外设之间的数据交换。
  正常情况下，cpu把数据送到缓冲区就认为要求的工作已经处理完了，至于缓冲区的数据什么时候真正被外设处理那是由系统和外设调度决定的，跟cpu处理肯定是不同步的。
  cpu可能已经处理到输出后好几条指令了，缓冲区里的数据还在处理。
  但要是你的程序里有强制刷新缓冲指令，那cpu就要等缓冲区里数据真正被外设处理完才执行下一条指令。
  > 5.6.7 缓冲区刷新见 BufferOutput.cpp
8.命名空间：
  使用某个库中的名字时，必须显式说明命名空间的名字。
  作用域运算符(::)
 */