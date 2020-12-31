#include <stdio.h>

int main()
{
    // two-dimensional arrays
    int matrix[4][5]; // declaration -- 4 rows by 5 columns

    int numbersTwo[3][4] = { // initialiization
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {47, 48, 49, 50}
    };

    // three-dimensional arrays
    int numbersThree[2][3][4] = {
        {
            {10, 20, 30, 40},
            {15, 25, 35, 45},
            {47, 48, 49, 50}
        },
        {
            {10, 20, 30, 40},
            {15, 25, 35, 45},
            {47, 48, 49, 50}
        }
    };

    int numbers[2][3][4];
    int sum = 0;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 4; ++k) {
                sum += i + j + k;
                numbers[i][j][k] = i + j + k;
                printf("numbers[%d][%d][%d] is %d\n", i, j, k, numbers[i][j][k]);
            }
        }
    }
    printf("\nCumulative sum is %d\n", sum);

    // N.B. higher-order arrays generalize similarly (i.e., [...][...][...][...]..., etc.)

    return 0;
}