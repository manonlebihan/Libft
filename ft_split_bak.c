/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_bak.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manonlebihan <manonlebihan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 10:38:00 by mle-biha          #+#    #+#             */
/*   Updated: 2022/06/09 23:53:42 by manonlebiha      ###   ########.fr       */
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

	i = 0;
	count_word = ft_count_word(s, c);
/* 	if (count_word <= 1)
		return (s); */
	res = (char **)malloc((count_word + 1) * sizeof (char *));
	printf("count_word = %d\n", count_word+1);
	while (i <= count_word)
	{
		count_char = ft_count_char(s, c);
		res[i] = (char *)malloc((count_char + 1) * sizeof (char));
		ft_strlcpy(res[i], s, count_char + 1);
		printf("%d    %s\n", i, res[i]);
		s += count_char + 1;
		i++;
	}
	i = 0;
	while (i<6)
	{
		printf("%d   =========>   %s\n", i, res[i]);
		i++;
	}

	res[count_word + 1] = NULL;
	return (res);
}

int	main(void)
{
	char	**res;
	char	*s;
	char	c;
	int		i;

	i = 0;
	s = "manon est a paris demain aussi";
	c = ' ';
	res = ft_split(s, c);

/* 		printf("%s\n", res[0]);
		printf("%s\n", res[1]);
		printf("%s\n", res[2]);
		printf("%s\n", res[3]); */


	while (res[i])
	{
		printf("%d   =>   %s\n", i, res[i]);
		i++;
	}
	return (0);
}