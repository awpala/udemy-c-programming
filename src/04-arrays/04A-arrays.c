#include <stdio.h>

#define COUNT 10

int main(void)
{
    int grades[COUNT];
    int count = COUNT;
    long sum = 0;
    float average = 0.0f;

    // From the terminal, run as: ./04A-arrays
    printf("\nEnter the %d grades:\n", count);

    // read in the ten numbers to be averaged
    for (int i = 0; i < count; ++i) {
        printf("grade %2u> ", i + 1);
        scanf("%d", &grades[i]);
        sum += grades[i];
    }

    average = (float) sum/count;

    printf("\nAverage of the %d grades entered is: %.2f\n", count, average);

    return 0;
}