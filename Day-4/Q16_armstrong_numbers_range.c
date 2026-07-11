#include <stdio.h>

int main()
{
    int start, end;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("Armstrong Numbers between %d and %d are:\n", start, end);

    for(int num = start; num <= end; num++)
    {
        int original = num;
        int temp = num;
        int remainder;
        int sum = 0;

        while(temp != 0)
        {
            remainder = temp % 10;
            sum = sum + (remainder * remainder * remainder);
            temp = temp / 10;
        }

        if(sum == original)
        {
            printf("%d ", original);
        }
    }

    printf("\n");

    return 0;
}
