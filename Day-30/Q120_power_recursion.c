#include <stdio.h>

int power(int base, int exp)
{
    if(exp == 0)
        return 1;

    return base * power(base, exp - 1);
}

int main()
{
    int base, exponent;

    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exponent);

    printf("Result = %d\n", power(base, exponent));

    return 0;
}
