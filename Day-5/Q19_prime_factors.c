#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Prime Factors of %d are: ", num);

    for(int i = 2; i <= num; i++)
    {
        while(num % i == 0)
        {
            printf("%d ", i);
            num /= i;
        }
    }

    printf("\n");

    return 0;
}
