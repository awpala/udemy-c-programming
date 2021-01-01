#include <stdio.h>
#include <stdbool.h>

#define MAX 100

int main()
{
    int primes[MAX/2] = {0};
    int primeIndex = 2;
    bool isPrime;

    // hard-code initial prime numbers
    primes[0] = primeIndex;
    primes[1] = primeIndex + 1;

    for (int p = 5; p <= MAX; p += 2) {
        isPrime = true;

        for (int i = 1; isPrime && (p >= primes[i] * primes[i]); ++i) {
            if (p % primes[i] == 0) {
                isPrime = false;
            }
        }

        if (isPrime == true) {
            primes[primeIndex] = p;
            ++primeIndex;
        }
    }

    printf("Prime numbers <= %d: ", MAX);
    for (int i = 0; i < primeIndex; ++i) {
        printf("%i ", primes[i]);
    }
    printf("\n");

    return 0;
}