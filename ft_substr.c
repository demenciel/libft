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

char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	char			*new_str;
	unsigned int	i;

	i = 0;
	if (!str || !len)
		return (str);
	new_str = malloc((len - start) + 1 * sizeof(char));
	if (!new_str)
		return (NULL);
	while (start < len)
		new_str[i++] = str[start++];
	new_str[i] = '\0';
	return (new_str);
}
