#include <stdio.h>
#include <stdlib.h>

typedef enum {
    false,
    true
} bool;

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    } else if (number <= 3) {
        return true;
    } else if (number % 2 == 0 || number % 3 == 0) {
        return false;
    }

    int i = 5;

    while (i * i <= number) {
        if (number % i == 0 || number % (i + 2) == 0) {
            return false;
        }

        i += 6;
    }

    return true;
}

int main() {
    printf("How many prime numbers You want to calculate?.\n");

    int n;
    scanf("%d", &n);

    int primeNumbers[n];
    int numbersFound = 0;

    for (int i = 0; numbersFound < n; i++) {
        if (isPrime(i)) {
            primeNumbers[numbersFound] = i;
            printf("Prime number #%d: %d \n", ++numbersFound, i);
        }
    }

    return 0;
}
