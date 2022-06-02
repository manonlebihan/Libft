/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:02:10 by mle-biha          #+#    #+#             */
/*   Updated: 2022/06/02 14:44:04 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_size;

	i = 0;
	src_size = 0;
	while (src[src_size] != '\0')
		src_size++;
	if (dstsize == 0)
		return (src_size);
	while (i < (dstsize - 1) && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_size);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*dst;
	size_t		i;
	int			dst_len;

	dst_len = len - start;
	i = start;
	dst = (char *)malloc((dst_len + 1) * sizeof(char));
	if (dst == NULL)
		return (NULL);
	while (i < len && (*(s + i) != '\0'))
	{
		*dst = *(s + i);
		dst++;
		i++;
	}
	*dst = '\0';
	return (dst - dst_len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = ft_strlen(s1);
	s2 = malloc(30);
	ft_strlcpy(s2, s1, 30);
	while (s1[0] != set[j])
		j++;

	s2 = ft_substr(s2, 1, 18);
// gonna need substr
// Faire un malloc qql part
// Vérification si allocation a marché
    //if (s2 == NULL)
     //   return (NULL);
// valeur retournée (new string : s2)
	//*s2 = '\0';
	return (s2);
}

int	main(void)
{
	char	*s1;
	char	*set;
	char	*s3;

	s1 = "Manon est gentille";
	set = "eM";
	s3 = ft_strtrim(s1, set);
	printf("%s\n", s3);
}
