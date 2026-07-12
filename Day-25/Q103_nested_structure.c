#include <stdio.h>

struct Address
{
    char city[30];
    char state[30];
};

struct Student
{
    int roll;
    char name[30];
    struct Address address;
};

int main()
{
    struct Student s;

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);

    printf("Enter City: ");
    scanf(" %[^\n]", s.address.city);

    printf("Enter State: ");
    scanf(" %[^\n]", s.address.state);

    printf("\nStudent Details\n");
    printf("Roll Number: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("City: %s\n", s.address.city);
    printf("State: %s\n", s.address.state);

    return 0;
}
