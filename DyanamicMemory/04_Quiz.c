#include <stdio.h>
#include <stdlib.h>
int main()
{
    // For Malloc
    int *ptr;
    int n;
    printf("How many integers you want to enter ?\n");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %d\n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The value of %d is %d \n", i + 1, ptr[i]);
    }

    return 0;
}