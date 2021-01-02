#include <stdio.h>

int main(void)
{
    int count = 10, x;
    int *int_pointer; // pointer variable declaration (uninitialized)

    int_pointer = &count; // assign int_pointer to address of int variable count
    x = *int_pointer; // dereference int_pointer and assign the (int) value to x

    printf("count = %i, x = %i, address of count = %p\n", count, x, int_pointer); // N.B. %p is format specifier for pointers (hexadecimal long unsigned int)
    printf("int_pointer's address: %p\n", (void*)&int_pointer); // N.B. void* casts to a pointer type since &int_pointer is a long unsigned int
    printf("int_pointer occupies %lu bytes\n\n", sizeof(int_pointer));


    int number = 0; // initialized to 0
    int *pNumber = NULL; // intialized to NULL

    number = 10;
    printf("After number = 10...\n");
    printf("number's address: %p\n", &number);
    printf("number's value: %d\n\n", number);

    pNumber = &number;

    printf("After pNumber = &number...\n");
    printf("pNumber's address: %p\n", (void*)&pNumber);
    printf("pNumber's size: %zd bytes\n", sizeof(pNumber));
    printf("pNumber's value: %p\n", pNumber);
    printf("value pointed to by pNumber: %d\n", *pNumber);

    return 0;
}