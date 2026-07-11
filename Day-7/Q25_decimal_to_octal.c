#include <stdio.h>

int main()
{
    int decimal, octal = 0, place = 1, remainder;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    while(decimal != 0)
    {
        remainder = decimal % 8;
        octal = octal + (remainder * place);
        place = place * 10;
        decimal = decimal / 8;
    }

    printf("Octal Number = %d\n", octal);

    return 0;
}
