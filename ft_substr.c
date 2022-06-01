/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:01:59 by mle-biha          #+#    #+#             */
/*   Updated: 2022/06/01 16:23:39 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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

/* int	main(void)
{
	char	*src;
	char	*dst;
	int		start;
	int		len;

	src = "hello tout le monde";
	start = 6;
	len = 19;
	dst = ft_substr(src, start, len);
	printf("%s\n", dst);
	return (0);
} */
