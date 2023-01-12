/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouture <acouture@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:14:24 by acouture          #+#    #+#             */
/*   Updated: 2023/01/12 14:15:52 by acouture         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_itoa_len(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		n = -n;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static int	ft_pow(int len)
{
	int	div;

	div = 1;
	while (len > 1)
	{
		div = div * 10;
		len--;
	}
	return (div);
}

static char	int_to_char(int n)
{
	return (n + '0');
}

char	*ft_itoa(int n)
{
	int		n_len;
	int		i;
	int		div_pow;
	char	*n_str;

	n_len = ft_itoa_len(n);
	n_str = malloc((n_len + 2) * (sizeof(char)));
	if (!n_str)
		return (NULL);
	div_pow = ft_pow(n_len);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = 0;
	if (n < 0)
	{
		n_str[i++] = '-';
		n = -n;
	}
	while (div_pow > 0)
	{
		n_str[i++] = int_to_char(((n / div_pow) % 10));
		div_pow = div_pow / 10;
	}
	n_str[i] = '\0';
	return (n_str);
}
