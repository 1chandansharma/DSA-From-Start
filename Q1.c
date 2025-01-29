// WAP to demonstrate the Dynamic Memory Allocation in C
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m, i;
    int *ptr;

    // Input the initial size of memory
    printf("Enter the size n: ");
    scanf("%d", &n);

    // Dynamically allocate memory
    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Print the garbage values in the allocated memory
    printf("The elements in the dynamically allocated memory are:\n");
    for (i = 0; i < n; i++) {
        printf("Printing the garbage value:\n");
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Initialize the allocated memory with values
    for (i = 0; i < n; i++) {
        ptr[i] = i + 1;
    }
    printf("\nInitialized values:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Input the new size of memory
    printf("Enter the new size m (greater than n): ");
    scanf("%d", &m);

    // Reallocate memory to the new size
    ptr = (int *)realloc(ptr, m * sizeof(int));
    if (ptr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    // Print the garbage values in the reallocated memory
    printf("The elements in the reallocated memory are:\n");
    for (i = 0; i < m; i++) {
        printf("Printing the garbage value:");
        printf("\n%d ", ptr[i]);
    }

    // Initialize the reallocated memory with values
    for (i = 0; i < m; i++) {
        ptr[i] = i + 1;
    }
    printf("\nInitialized values:\n");
    for (i = 0; i < m; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(ptr);
    return 0;
}


