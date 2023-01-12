/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouture <acouture@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 12:11:42 by acouture          #+#    #+#             */
/*   Updated: 2023/01/11 14:19:08 by acouture         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t count_words(const char *str, char c)
{
	size_t	count;
	size_t	flag;
	
	count = 0;
	flag = 0;
	while (*str)
	{
		if (*str != c && flag == 0)
		{
			count++;
			flag = 1;
		}
		else if (*str == c)
			flag = 0;
		str++;
	}
	return (count);
}

static char	*word_dup(const char *str, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < end)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**tab;

	if (!s || !(tab = malloc((count_words(s, c) + 1) * sizeof(char *))))
		return (NULL);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if (s[i] == c && index >= 0)
		{
			tab[j++] = word_dup(s, index, i);
			index = -1;
		}
		i++;
	}
	if(index > 0 && s[i-1] != c)
        tab[j++] = word_dup(s, index, i);
	tab[j] = NULL;
	return (tab);
}
