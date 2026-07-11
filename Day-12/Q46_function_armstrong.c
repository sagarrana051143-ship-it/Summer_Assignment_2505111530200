#include <stdio.h>

int isArmstrong(int n)
{
    int original = n, sum = 0, digit;

    while(n != 0)
    {
        digit = n % 10;
        sum = sum + digit * digit * digit;
        n = n / 10;
    }

    return original == sum;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(isArmstrong(num))
        printf("%d is an Armstrong Number.\n", num);
    else
        printf("%d is NOT an Armstrong Number.\n", num);

    return 0;
}
