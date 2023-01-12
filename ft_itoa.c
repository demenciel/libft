#include <stdlib.h>
#include <stdio.h>
#include <string.h>

static int ft_itoa_len(int n)
{
    int i;

    i = 0;
    if (n < 0)
        n = -n;
    while (n > 0)
    {
        n = n / 10;
        i++;
    }
    return (i);
}

static int ft_pow(int len)
{
    int div;

    div = 1;
    while (len > 0)
    {
        div = div * 10;
        len--;
    }
    return (div);
}

char *ft_itoa(int n)
{
    int n_len;
    int i;
    int div_pow;
    char *n_str;

    n_len = ft_itoa_len(n);
    n_str = (char*)malloc((n_len + 1) * (sizeof(char)));
    if (!n_str)
        return (NULL);
    div_pow = ft_pow(n_len);
    if (n == -2147483648)
        return ("-2147483648");
    i = 0;
    if (n < 0)
    {
        n_str[i++] = '-';
        n = -n;
    }
    while (div_pow > 0)
    {
        n_str[i] = (n / div_pow % 10 + 48);
        i++;
        div_pow = div_pow / 10;
    }
    n_str[i] = '\0';
    return (n_str);
}

int main()
{
    int n = 456;

    printf("%s", ft_itoa(n));
}