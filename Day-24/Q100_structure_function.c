#include <stdio.h>

struct Rectangle
{
    float length;
    float width;
};

float area(struct Rectangle r)
{
    return r.length * r.width;
}

int main()
{
    struct Rectangle rect;

    printf("Enter Length: ");
    scanf("%f", &rect.length);

    printf("Enter Width: ");
    scanf("%f", &rect.width);

    printf("Area = %.2f\n", area(rect));

    return 0;
}
