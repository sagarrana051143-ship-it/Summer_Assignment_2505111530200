#include <stdio.h>

int main()
{
    FILE *source, *destination;
    char ch;

    source = fopen("data.txt", "r");

    if(source == NULL)
    {
        printf("Source file not found.\n");
        return 1;
    }

    destination = fopen("copy.txt", "w");

    while((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("File copied successfully.\n");

    return 0;
}
