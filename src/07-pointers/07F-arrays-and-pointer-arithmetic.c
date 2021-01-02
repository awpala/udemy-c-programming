#include <stdio.h>
#include <string.h>

int arraySum(int array[], const int n);
// int arraySum(int *array, const int n);

int main(void)
{
    int values[100];
    int *valuesPtr;
    valuesPtr = values; // valuesPtr now points to the first element of array values
    valuesPtr = &values[0]; // equivalent to above line -- either form is valid, and a matter of preference

    int vals[10] = {3, 7, -9, 3, 6, -1, 7, 9, 1, -5};
    printf("The sum is %i\n\n", arraySum(vals, 10));


    char multiple[] = "a string";
    char *p = multiple;

    for (int i = 0; i < strnlen(multiple, sizeof(multiple)); ++i) {
        printf("multiple[%d] = '%c', *(p+%d) = '%c', &multiple[%d] = %p, p+%d = %p\n", i, multiple[i], i, *(p+i), i, &multiple[i], i, p+i);
    }
    printf("\nType char occupies: %d byte", (int)sizeof(char));
    printf("\n\n");
    

    long mult[] = {15L, 25L, 35L, 45L};
    long *ptr = mult;

    for (int i = 0; i < sizeof(mult)/sizeof(mult[0]); ++i) {
        printf("address ptr+%d (&multiple[%d]): %llu\t*(ptr+%d) value: %ldL\n", i, i, (unsigned long long)(ptr+i), i, *(ptr+i));
    }

    printf("\nType long occupies: %d bytes\n", (int)sizeof(long)); // N.B. with pointer arithmetic, the appropriate offset is performed in ++i

    return 0;
}

int arraySum(int array[], const int n) // N.B. int *array is an equivalently valid type declaration for the first parameter
{
    int sum = 0, *ptr;
    int *const arrayEnd = array + n;

    for (ptr = array; ptr < arrayEnd; ++ptr) { // N.B. ptr = array; is equivalent to ptr = &array[0];
        sum += *ptr;
    }

    return sum;
}

// N.B. the following is equivalent to above function, using a pointer parameter rather than an array parameter:
// int arraySum(int *array, const int n)
// {
//     int sum = 0;
//     int *const arrayEnd = array + n;

//     while (array < arrayEnd) {
//         sum += *array++;
//     }

//     return sum;
// }
