/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 14:31:07 by mle-biha          #+#    #+#             */
/*   Updated: 2022/06/03 16:39:27 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != c)
	{
		if (!*s++)
			return (NULL);
	}
	return ((char *)s);
}

/* #include <string.h>

int	main(void)
{
	char s[] = "tripouille";
	//char c = 't' + 256;
   	char *p, *p2;
	p = ft_strchr(s, 't' + 256);
	p2 = strchr(s, 't' + 256);
	printf("ft_strchr(s, 't' + 256) = %s\n", p);
	printf("strchr(s, 't' + 256) = %s", p2);
	return (0);
}
 */
/* char	*ft_strrchr(const char *s, int c)
{
	int	i;

	c = (unsigned char)c;
	i = ft_strlen(s);
	while (i != -1)
	{
		if (s[i] == c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
 */