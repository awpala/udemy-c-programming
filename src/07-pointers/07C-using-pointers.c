#include <stdio.h>

int main(void)
{
    long num1 = 0L;
    long num2 = 0L;
    long *pNum = NULL;

    pNum = &num1;
    *pNum = 2L; // changes num1's value
    ++num2;
    num2 += *pNum;

    pNum = &num2;
    ++*pNum; // changes num2's value

    printf("num1 = %ld, num2 = %ld, *pNum = %ld, *pNum + num2 = %ld\n", num1, num2, *pNum, *pNum + num2);

    return 0;
}