/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouture <acouture@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 15:56:47 by acouture          #+#    #+#             */
/*   Updated: 2023/01/11 14:57:53 by acouture         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	size_t	new_len;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start)
		if (!ft_strchr(set, s1[--end]))
			break ;
	new_len = (end - start + 1) + 1;
	new_str = malloc(new_len * sizeof(char));
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, s1 + start, new_len);
	return (new_str);
}
