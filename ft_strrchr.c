/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 14:32:03 by mle-biha          #+#    #+#             */
/*   Updated: 2022/05/25 14:32:07 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
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

/* #include <string.h>

int	main(void)
{
	char s[] = "tripouille";
	//char c = 't';
	char *p, *p2;
	p = ft_strrchr(s, 't' + 256);
	p2 = strrchr(s, 't' + 256);
	printf("ft_strrchr(s, c) = %s\n", p);
	printf("strrchr(s, c) = %s\n", p2);
	return (0);
} */