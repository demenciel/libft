#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *ft_strjoin(const char *s1, const char *s2)
{
    char *join_str;
    unsigned int i;
    unsigned int j;

    i = 0;
    j = 0;
    join_str = malloc((strlen(s1) + strlen(s2)) * sizeof(char));
    if (join_str == NULL)
        return (NULL);
    while (s1[i])
    {
        join_str[i] = s1[i];
        i++;
    }
    while (s2[j])
    {
        join_str[i] = s2[j];
        i++;
        j++;
    }
    return (join_str);
}

int main()
{
    char str1[] = "hello, ";
    char str2[] = "world!";

    printf("%s", ft_strjoin(str1, str2));
}