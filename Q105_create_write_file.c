#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("data.txt", "w");

    if(fp == NULL)
    {
        printf("Error creating file.\n");
        return 1;
    }

    fprintf(fp, "Hello, this is my first file.");

    fclose(fp);

    printf("Data written successfully.\n");

    return 0;
}
