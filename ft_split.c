/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 10:38:00 by mle-biha          #+#    #+#             */
/*   Updated: 2022/06/08 19:16:54 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int	ft_count_word(const char *s, char c)
{
	int	i;
	int	word_count;

	i = 0;
	word_count = 1;
	if (s[0] == '\0')
		return (0);
	while (s[i])
	{
		if (s[i] == c)
			word_count++;
		i++;
	}
	return (word_count);
}

char	*ft_word_dup(const char *s, int s_start, int s_finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((s_finish - s_start + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	while (s_start < s_finish)
		word[i++] = s[s_start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**res;

	i = 0;
	j = 0;
	index = -1;
	res = malloc((ft_count_word(s, c) + 1) * sizeof(char *));
	if (res == NULL)
		return (NULL);
	if (!s)
		return (0);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			res[j++] = ft_word_dup(s, index, i);
			index = -1;
		}
		i++;
	}
	res[j] = 0;
	return (res);
}
