#include <stdio.h>

int main()
{
    int octal, decimal = 0, base = 1, remainder;

    printf("Enter an octal number: ");
    scanf("%d", &octal);

    while(octal != 0)
    {
        remainder = octal % 10;
        decimal = decimal + (remainder * base);
        base = base * 8;
        octal = octal / 10;
    }

    printf("Decimal Number = %d\n", decimal);

    return 0;
}
