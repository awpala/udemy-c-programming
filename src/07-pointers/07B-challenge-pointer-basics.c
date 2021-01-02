#include <stdio.h>

int main(void)
{
    int num = 150;
    int *pNum = NULL;

    pNum = &num;

    printf("After pNum = &num...\n");
    printf("Address of num %p\n", &num);
    printf("Address of pNum: %p\n", &pNum);
    printf("Value of pNum: %p\n", pNum);
    printf("Value of what pNum points to (num): %d\n", *pNum);

    return 0;
}