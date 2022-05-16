/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 18:40:48 by macbookpro        #+#    #+#             */
/*   Updated: 2022/05/16 15:34:52 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrchr(const char *str, int searchedChar)
{
	int	i;

	i = ft_strlen(str);
	while (i != 0)
	{
		if (str[i] == searchedChar)
			return ((char *)str + i);
		i--;
	}
	return (NULL);
}
