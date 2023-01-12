#include "libft.h"

void    ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

/* int main(void)
{
    char c;
    c = 'A';
    ft_putchar_fd(c, STDOUT_FILENO);
    return 0;
} */