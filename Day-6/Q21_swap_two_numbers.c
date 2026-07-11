#include <stdio.h>

int main()
{
    int a, b, temp;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("After Swapping:\n");
    printf("First Number = %d\n", a);
    printf("Second Number = %d\n", b);

    return 0;
}
