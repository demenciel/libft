#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *ft_strdup(const char *str)
{
    size_t          size_str;
    char            *copy_str;

    size_str = strlen(str) + 1;
    copy_str = malloc(size_str);
    if (copy_str == NULL)
        return (NULL);
    strlcpy(copy_str, str, size_str);
    return (copy_str);
}

int main()
{
    char string[] = "Hello, world! sadsa d";
    printf("%s\n", strdup(string));

    char string1[] = "Hello, world! sasfaf";
    printf("%s\n", ft_strdup(string1));
}