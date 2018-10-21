#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("How many first Natural numbers you would like to find the sum of? \n");

    scanf("%d", &n);

    int sum = n * (n + 1) / 2;

    printf("The sum of %d first natural numbers is %d", n, sum);
}
