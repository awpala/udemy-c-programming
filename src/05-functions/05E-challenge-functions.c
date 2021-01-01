#include <stdio.h>

// function prototypes
int gcd(int u, int v);
float absoluteValue(float x);
float squareRoot(float x);

int main()
{
    // function calls
    int result = 0;
    result = gcd(150, 35);
    printf("The gcd of 150 and 35 is %d\n", result);
    result = gcd(1026, 405);
    printf("The gcd of 1026 and 405 is %d\n", result);
    printf("The gcd of 83 and 240 is %d\n\n", gcd(83, 240)); // function call can also be used directly in printf() as an expression

    float f1 = -15.5, f2 = 20.2, f3 = -5.0;
    int i1 = -716;
    float absoluteValueResult = 0.0f;
    absoluteValueResult = absoluteValue(f1);
    printf("result = %.2f\n", absoluteValueResult);
    absoluteValueResult = absoluteValue(f2) + absoluteValue(f3);
    printf("result = %.2f\n", absoluteValueResult);
    absoluteValueResult = absoluteValue((float)i1);
    printf("result = %.2f\n", absoluteValueResult);
    absoluteValueResult = absoluteValue(i1);
    printf("result = %.2f\n", absoluteValueResult);
    printf("result = %.2f\n\n", absoluteValue(-6.0) / 4);

    squareRoot(-3.0);
    printf("%.2f\n", squareRoot(16.0));
    printf("%.2f\n", squareRoot(25.0));
    printf("%.2f\n", squareRoot(9.0));
    printf("%.2f\n", squareRoot(225.0));

    return 0;
}

// function definitions
int gcd(int u, int v)
{
    int temp;

    while (v != 0) {
        temp = u % v;
        u = v;
        v = temp;
    }

    return u;
}

float absoluteValue(float x)
{
    float tolerance = 1.0E-4f;
    return (x - tolerance) >= 0.0f ? x : -x;
}

float squareRoot(float x)
{
    const float epsilon = 0.0001f;
    float guess = 1.0;
    
    if ((x - epsilon) < 0.0f) {
        printf("Negative argument to squareRoot is not permitted.\n");
        return -1.0f;
    }

    while (absoluteValue(guess * guess - x) >= epsilon) {
        guess = (x / guess + guess) / 2.0f;
    }

    return guess;
}