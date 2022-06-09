/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 10:38:00 by mle-biha          #+#    #+#             */
/*   Updated: 2022/06/09 11:37:00 by mle-biha         ###   ########.fr       */
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

char	**ft_split(char const *s, char c)
{
	
}