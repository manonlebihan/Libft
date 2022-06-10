/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manonlebihan <manonlebihan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:08:54 by manonlebiha       #+#    #+#             */
/*   Updated: 2022/06/10 21:31:31 by manonlebiha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

int	ft_word_count(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == '\0' || s[i + 1] == c))
			count++;
		i++;
	}
	return (count);
}

int	ft_char_count(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i] && s[i] != c)
	{
		count++;
		i++;
	}
	return (count);
}

char	**ft_free_split(char **split, int i)
{
	while (i--)
		free(split[i]);
	free(split);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char	**split;
	int		len;
	int		i;

	if (!s)
		return (NULL);
	split = (char **)malloc((ft_word_count(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s++ != c)
		{
			s--;
			split[i] = (char *)
				malloc(((len = ft_char_count(s, c)) + 1) * sizeof(char));
			if (!(split[i]))
				return (ft_free_split(split, i));
			ft_strlcpy(split[i++], s, len + 1);
			s += len;
		}
	}
	split[i] = NULL;
	return (split);
}
