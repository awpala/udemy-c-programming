#include <stdio.h>

int main()
{
    unsigned long long sum = 0LL; // stores the sum of the integers
    unsigned int count = 0; // the number of integers to be summed

    // From the terminal, run as: ./03D-for
    printf("Enter the number of integers to sum: ");
    scanf(" %u", &count);

    // sum integers from 1 to count
    for (unsigned int i = 1; i <= count; ++i) {
        sum += i;
    }
    
    printf("\nTotal of the first %u numbers is %llu\n", count, sum);

    return 0;
}