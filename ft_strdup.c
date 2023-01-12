/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouture <acouture@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:25:46 by acouture          #+#    #+#             */
/*   Updated: 2023/01/10 15:24:22 by acouture         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	size_str;
	char	*copy_str;

	size_str = ft_strlen(str) + 1;
	copy_str = malloc(size_str);
	if (copy_str == NULL)
		return (NULL);
	ft_strlcpy(copy_str, str, size_str);
	return (copy_str);
}
