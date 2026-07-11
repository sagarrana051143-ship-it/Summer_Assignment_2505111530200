#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], temp[100];
    int i, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("Reversed Words: ");

    for(i = strlen(str) - 1; i >= 0; i--)
    {
        if(str[i] == ' ')
        {
            temp[j] = '\0';
            printf("%s ", temp);
            j = 0;
        }
        else
        {
            temp[j++] = str[i];
        }
    }

    while(j > 0)
    {
        printf("%c", temp[--j]);
    }

    return 0;
}
