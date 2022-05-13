/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbookpro <macbookpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 18:40:48 by macbookpro        #+#    #+#             */
/*   Updated: 2022/05/13 16:05:55 by macbookpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrchr(char *str, int searchedChar)
{
	int	i;

	i = ft_strlen(str);
	while (i != 0)
	{
		if (str[i] == searchedChar)
			return (str + i);
		i--;
	}
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>

int	main()
{
	char str[] = "mini manon est belle";
	char ch = 'm';
   	char *p, *p2;
	p = ft_strrchr(str, ch);
	p2 = strrchr(str, ch);
	printf("ft_strrchr(str1, str2) = %s\n", p);
	printf("strrchr(str1, str2) = %s", p2);
	return (0);
}*/