// Using calloc
#include <stdio.h>
#include <stdlib.h>
int main()
{
    //hello
    int n, *ptr, i, m;
    printf("DMA using Calloc \nCompiled by Chandan\n");
    printf("Enter the size of n: ");
    scanf("%d", &n);
    // Allocate memory
    ptr = (int *)calloc(n, sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    // Print garbage values
    printf("Garbage values in the allocated memory:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", *(ptr + i));
    }
    printf("Now initializing\n");
    // Initialize the values by asking the user
    printf("Enter the value of the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }
    // Print the initialized values
    printf("The values of the elements are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
    // Reallocate memory
    printf("Enter the new size (i.e. m) for reallocating the size of n: ");
    scanf("%d", &m);
    ptr = (int *)realloc(ptr, m * sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory reallocation failed\n");
        return 1;
    }
    // Print garbage values after reallocation
    printf("Garbage values after the reallocated memory:\n");
    for (i = 0; i < m; i++)
    {
        // printf("%d\n", *(ptr + i));
        printf("%d\n", ptr[i]);
    }
    printf("Now initializing the garbage values\n");
// Initialize the values by asking the user
    printf("Enter the value of for the new elements:\n");
    for (i = 0; i < m - n; i++)
    {
        scanf("%d", ptr + i + n);
    }
    // Print the initialized values
    printf("The values of all elements are:\n");
    for (i = 0; i < m; i++)
    {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
    // Free the allocated memory
    free(ptr);
    return 0;
}

