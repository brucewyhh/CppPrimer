/**
 * The Return Value of Main Function
 * @bruce
 * 20171229v1
 */
int main()
{

    return 0;

}

/*
1.大多数系统中，main的返回值用来指示状态；
  返回0，则代表程序正常退出；
  返回其它数字的含义则由系统决定。通常，返回非零代表程序异常退出。
2.命令行编译：g++ source_file;
  命令行中输入“./a.out && ls”，则会列出当前目录下的文件夹和文件;
  && 的含义是：如果 && 前面的程序正常退出，则继续执行 && 后面的程序，否则不执行。利用程序的返回值，可以控制要不要执行下一个程序。
3.分情况说明：
 (1) "return 0;"：正常退出；
 (2) 无"return 0;"：正常退出；
 (3) "return integer_number(0,256)"：非0值，非256，在MacOS中用1byte（8bit）存储程序返回值[0,255]；
     "return integer_number(-256，0)"：非0值，非-256，同上；
 (4) "return float_number"：warning提示，转换成整型数情况；
4.编程提示：
 (1) 在一般函数中，如果碰到return 语句，那么程序就会返回调用该函数的下一条语句执行，也就是说跳出函数的执行，回到原来的地方继续执行下去。
 但是如果是在主函数中碰到return语句，那么整个程序就会停止，退出程序的执行。
 (2) 一般情况下，C++做出来的函数都要求返回一个值，当函数执行正常，且达到了一般情况下的目的，那么就返回0，这个0就是返回给主调函数以通知没有出错的；
 如果函数调用中出错，或者没有按照一般情况执行，那么就返回其他值，以告知主调函数采取响应策略；
 如果你在某个函数所在类的定义所在的头文件中定义了一组状态值（一般都是负整数），
 那么函数就可以返回不同的值以告之主调函数具体发生了什么异常或错误， 这种情况一般用于函数功能独立性较差的的情况。
 所以一般不鼓励把函数返回类型定义为void，至少返回应该是int，而在函数的最后加上return 0.语句。

*/