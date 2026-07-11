#include <stdio.h>

int main()
{
    int decimal;
    char hexadecimal[20];

    printf("Enter a hexadecimal number: ");
    scanf("%s", hexadecimal);

    sscanf(hexadecimal, "%x", &decimal);

    printf("Decimal Number = %d\n", decimal);

    return 0;
}
