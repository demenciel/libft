#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void *ft_calloc(size_t count, size_t size)
{
    size_t total_size = (count * size);
    void *ptr = malloc(total_size);

    if (ptr)
        memset(ptr, 0, total_size);
    return (ptr);
}

int main()
{
    size_t count = 10;
    size_t size = 10;
    void *ptr = calloc(count, size);
    if (ptr == NULL) {
        printf("Error: calloc failed\n");
        return 1;
    }

    size_t count1 = 10;
    size_t size1 = 10;
    void *ptr1 = ft_calloc(count1, size1);
    if (ptr1 == NULL) {
        printf("Error: ft_calloc failed\n");
        return 1;
    }
}