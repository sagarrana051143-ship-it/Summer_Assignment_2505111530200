#include <stdio.h>

int main()
{
    int num;
    long long binary = 0;
    int remainder, place = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    while(num != 0)
    {
        remainder = num % 2;
        binary += remainder * place;
        place *= 10;
        num /= 2;
    }

    printf("Binary Number = %lld\n", binary);

    return 0;
}
