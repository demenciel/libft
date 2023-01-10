#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int last_letter(const char *s1, size_t len, const char *set)
{
    while (s1[len - 1] == set[0])
        len--;   
    return (len);
}

char *ft_strtrim(const char *s1, const char *set)
{
    char *new_str;
    unsigned int i;
    unsigned int j;
    unsigned int last_alpha;

    i = 0;
    j = 0;
    last_alpha = last_letter(s1, strlen(s1), set);
    new_str = malloc(strlen(s1) * sizeof(char));
    if (new_str == NULL)
        return (NULL);
    while (s1[i] == set[0])
        i++;
    while (i < last_alpha)
    {
        new_str[j] = s1[i];
        j++;
        i++;
    }
    return (new_str);
}

int main()
{
    char string[] = "     Hello, world!     ";
    char set[] = " ";
    printf("%s", ft_strtrim(string, set));
}