#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a <= b && a <= c)
        printf("Smallest Number = %d\n", a);
    else if(b <= a && b <= c)
        printf("Smallest Number = %d\n", b);
    else
        printf("Smallest Number = %d\n", c);

    return 0;
}
