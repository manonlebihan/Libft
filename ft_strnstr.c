/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manonlebihan <manonlebihan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:29:55 by mle-biha          #+#    #+#             */
/*   Updated: 2022/05/23 23:39:33 by manonlebiha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		j = 0;
		while (haystack[i] && needle[j] && haystack[i] == needle[j])
		{
			++i;
			++j;
		}
		if (needle[j] == '\0')
			return ((char *)&haystack[i - j]);
		i = i - j + 1;
	}
	return (0);
}

/* char *
ft_strnstr(const char *s, const char *find, size_t slen)
{
	char c, sc;
	size_t len;

	if ((c = *find++) != '\0') 
	{
		len = ft_strlen(find);
		do {
			do {
				if (slen-- < 1 || (sc = *s++) == '\0')
					return (NULL);
			} while (sc != c);
			if (len > slen)
				return (NULL);
		} while (ft_strncmp(s, find, len) != 0);
		s--;
	}
	return ((char *)s);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	c;
	char	sc;
	size_t	nlen;

	c = *needle++;
	sc = *haystack++;
	if (c != '\0')
	{
		nlen = ft_strlen(needle);
		while (ft_strncmp(haystack, needle, nlen) != 0)
		{
			while (sc != c)
			{
				if (nlen-- < 1 || sc == '\0')
					return (NULL);
			}
			if (nlen > len)
				return (NULL);
		}
		haystack--;
	}
	return ((char *)haystack);
}
 */
