#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *ft_substr(const char *str, unsigned int start, size_t len)
{
    char *new_str;
    unsigned int i;

    i = 0;
    new_str = malloc((len - start) * sizeof(char));
    if (new_str == NULL)
        return (NULL);
    while (start <= (len + 1))
    {
        new_str[i] = str[start];
        start++;
        i++;
    }
    return (new_str);
}
