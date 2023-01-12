/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouture <acouture@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 10:05:18 by acouture          #+#    #+#             */
/*   Updated: 2023/01/10 15:27:47 by acouture         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int i, size_t len)
{
	size_t	j;

	j = 0;
	if (!i)
		return (NULL);
	while (j < len)
	{
		*((unsigned char *)str + j) = i;
		j++;
	}
	return (str);
}
