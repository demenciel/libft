#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
        write(fd, "-2147483648", 11);
    if ()
    if (n < 0)
    {
        ft_putchar_fd('-', fd);
        n = -n;
    }
    if (n > 9)
    {
        ft_putnbr_fd(n / 10, fd);
        n = n % 10;
    }
    if (n < 10)
        ft_putchar_fd(n + 48, fd);
}
