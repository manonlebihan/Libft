/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:28:50 by macbookpro        #+#    #+#             */
/*   Updated: 2022/05/16 15:35:42 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *str, int searchedChar)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == searchedChar)
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
