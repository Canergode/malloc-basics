#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n = 5;
    int i;

    printf("Array size: %d\n", n);

    // Allocate memory for n integers using malloc
    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed.\n");
    }
    else
    {
        // Fill array with values 1 to n
        for (i = 0; i < n; i++)
        {
            ptr[i] = i + 1;
        }

        // Print array elements
        printf("Elements:\n");
        for (i = 0; i < n; i++)
        {
            printf("%d, ", ptr[i]);
        }

        // Free allocated memory
        free(ptr);
    }

    return 0;
}

