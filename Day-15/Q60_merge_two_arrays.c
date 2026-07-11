#include <stdio.h>

int main()
{
    int arr1[50], arr2[50], arr3[100];
    int n1, n2, i, k = 0;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter first array elements:\n");
    for(i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter second array elements:\n");
    for(i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    for(i = 0; i < n1; i++)
    {
        arr3[k++] = arr1[i];
    }

    for(i = 0; i < n2; i++)
    {
        arr3[k++] = arr2[i];
    }

    printf("Merged Array:\n");

    for(i = 0; i < k; i++)
    {
        printf("%d ", arr3[i]);
    }

    return 0;
}
