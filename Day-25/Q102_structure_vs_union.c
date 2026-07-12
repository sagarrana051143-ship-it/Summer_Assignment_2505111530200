#include <stdio.h>

struct Student
{
    int roll;
    char grade;
    float marks;
};

union StudentUnion
{
    int roll;
    char grade;
    float marks;
};

int main()
{
    printf("Size of Structure = %lu bytes\n", sizeof(struct Student));
    printf("Size of Union = %lu bytes\n", sizeof(union StudentUnion));

    return 0;
}
