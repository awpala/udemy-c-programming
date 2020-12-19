#include <stdio.h>
#include <stdlib.h> // provides atof

int main(int argc, char *argv[])
{
    double width = atof(argv[1]);
    double height = atof(argv[2]);
    double perimeter = 0.0;
    double area = 0.0;

    perimeter = 2.0 * (height + width);
    area = width * height;

    // From the terminal, an example program run is: ./01F-challenge-area-of-rectangle 44.25 28.5
    printf("Width is: %.2f, Height is: %.2f\n", width, height);
    printf("Perimeter is: %.2f\n", perimeter);
    printf("Area is: %.2f\n", area);

    return 0;
}
