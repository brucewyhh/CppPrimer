#include <iostream>
#include <cstring>
/*
 * the usage of tab 制表符
 * @bruce
 * 20180114v1
 */
int main()
{
    std::cout << "2\000\115\012"; // 出现 '\0',认为字符串输出结束; 输出结果：2
    std::cout << "2\t\115\012";
    // 当前系统制表符宽度为4
    std::cout << "\tThis\tis\tmy\tsmall\texample\tstring\twhich\tI'm\tgoing\tto\tuse\tfor\tpattern\tmatching.\n";
//  输出结果:      This	is	my	small	example	string	which	I'm	going	to	use	for	pattern	matching.

    char res[] = "hello\tworld";
    std::cout << res << std::endl;//不满8个字符，会用空格填充达到8个字符
    std::cout << "hello...world" << std::endl;//中间3个下划线_
}

/*
 * 制表符涉及3个概念：
 * 单词的长度：比如“word”这个单词的长度是 4 ， “a”这个单词的长度是 1 ，“are”这个单词的长度是 3 ，“你”这个单词的长度是 1 ，“你好”这个单词的长度是 2 。
 * 制表符的宽度（size）：制表符的宽度是一个可配置属性（例如，notepad++ 下制表符的默认宽度是 4 ），一旦配置好以后就固定了，除非再次配置。
 * 制表符所代表的空白字符的个数：制表符所代表的空白字符的个数不是固定的，它与制表符的宽度和该制表符前边的单词的长度满足一定的算术关系。
 *
 * 单词的长度用 wordLength 表示，
 * 制表符的宽度用 tabSize 表示，
 * 制表符所代表的空白字符的个数用 tabAppearSpaceLength 表示，这三者满足两个条件。
 *   tabAppearSpaceLength >=1 && tabAppearSpaceLength <= tabSize
 *   (wordLength + tabAppearSpaceLength) % tabSize == 0
 *   如果制表符的宽度为 4 ，单词 this 之后敲一个制表符，制表符会占用 4 个空白字符的位置，
 *   单词 a 之后敲一个制表符，制表符会占用3个空白字符的位置。
 */