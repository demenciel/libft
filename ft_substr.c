/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouture <acouture@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:28:35 by acouture          #+#    #+#             */
/*   Updated: 2023/01/12 15:52:32 by acouture         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(const char *str, unsigned int start, size_t len)
{
	char *new_str;
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	new_str = (char *)malloc((len + 1) * sizeof(*str));
	if (!new_str)
		return (NULL);
	while (str[i])
	{
		if (i >= start && j < len)
		{
			new_str[j] = str[i];
			j++;
		}
		i++;
	}
	new_str[j] = '\0';
	return (new_str);
}
