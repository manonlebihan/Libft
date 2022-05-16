/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:28:50 by macbookpro        #+#    #+#             */
/*   Updated: 2022/05/16 11:26:40 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(char *str, int searchedChar)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == searchedChar)
		{
			return (str + i);
		}
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>

int	main()
{
	char str[] = "hello world";
	char ch = 'w';
   	char *p, *p2;
	p = ft_strchr(str, ch);
	p2 = strchr(str, ch);
	printf("ft_strchr(str1, str2) = %s\n", p);
	printf("strchr(str1, str2) = %s", p2);
	return (0);
}*/