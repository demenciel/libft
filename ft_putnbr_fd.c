#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    if (n >= '0' && n <= '9')
        ft_putchar_fd(n, fd);
}

int main()
{
    int n = 6;
    ft_putnbr_fd(n, STDOUT_FILENO);
}