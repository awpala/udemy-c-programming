#include <stdio.h>

int main(void)
{
    int i = 10;
    float f = 2.34;
    char ch = 'k';

    void *vPtr; // a pointer of type void* can point to any type

    vPtr = &i;
    printf("Value of i = %d\n", *(int*)vPtr); // a pointer of type void* (e.g., vPtr) must be explicitly cast to a specific pointer type (e.g., int*) before being derefeerenced

    vPtr = &f;
    printf("Value of f = %.2f\n", *(float*)vPtr);

    vPtr = &ch;
    printf("Value of ch = '%c'\n", *(char*)vPtr);

    return 0;
}