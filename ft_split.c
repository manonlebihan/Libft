/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manonlebihan <manonlebihan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 10:38:00 by mle-biha          #+#    #+#             */
/*   Updated: 2022/06/10 00:16:39 by manonlebiha      ###   ########.fr       */
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
	word_count = 0;
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

int	ft_count_char(const char *s, char c)
{
	int	i;

	i = 0;
	if (s[0] == '\0')
		return (0);
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		count_word;
	int		count_char;
	int		i;
	int		start;

	if (!s) 
		return (NULL);
	i = 0;
	start = 0;
	count_word = ft_count_word(s, c);
	if (count_word <= 1)
	{
		res = (char **)malloc(sizeof (char *));
		if (res == NULL)
			return (NULL);
		ft_memcpy(res[0], s, ft_strlen(s));
		return (res);
	}
	res = (char **)malloc((count_word + 2) * sizeof (char *));
	if (res == NULL)
		return (NULL);
	while (i <= count_word)
	{
		count_char = ft_count_char(s + start, c);
		res[i] = ft_substr(s, start, count_char);
		if (res[i] == NULL)
			return (NULL);
		start += count_char + 1;
		i++;
	}
	res[count_word + 1] = NULL;
	return (res);
}

/* int	main(void)
{
	char	**res;
	char	*s;
	char	c;
	int		i;

	i = 0;
	s = "manon est a paris demain aussi";
	c = 'a';
	res = ft_split(s, c);
	
	while (res[i])
	{
		printf("%d   =>   %s\n", i, res[i]);
		i++;
	}
	return (0);
} */