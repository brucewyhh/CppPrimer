#include <iostream>
/**
 * The difference between [for, while, do-while]
 * @bruce
 * 20171230v1
 */
int main()
{


}

/*
 * 1.A while loop will always evaluate(评估) the condition first.
 *  while (condition) {
 *      //gets executed after condition is checked
 *  }
 *
 * 2.A do/while loop will always execute the code in the do{} block first and then evaluate the condition.
 *  do {
 *     //gets executed at least once
 *  } while (condition);
 *
 * 3.A for loop allows you to initiate(初始化) a counter variable, a check condition, and a way to increment your counter all in one line.
 *  for (int x = 0; x < 100; x++) {
 *       //executed until x >= 100
 *  }
 *
 * DIFFERENCE:
 * !!! use for when there is a known number of iterations(重复),
 * !!! and use while constructs when the number of iterations in not known in advance.
 * 见 VariableNumberOfInput.cpp
 *
 * ADDITION:
 * use break and continue statements which .come in handy.(派上用场) when doing loop processing.
 * break will instantly terminate(终止) the current loop and no more iterations will be executed.
 * continue will terminate the current iteration and move on to the next one.
 *
 *  ref:https://stackoverflow.com/questions/2950931/for-vs-while-in-c-programming
 */