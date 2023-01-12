/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouture <acouture@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:28:35 by acouture          #+#    #+#             */
/*   Updated: 2023/01/10 12:28:45 by acouture         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	char			*new_str;
	unsigned int	i;

	i = 0;
	new_str = malloc((len - start) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	while (start <= (len + 1))
	{
		new_str[i] = str[start];
		start++;
		i++;
	}
	return (new_str);
}
