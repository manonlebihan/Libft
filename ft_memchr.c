/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manonlebihan <manonlebihan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 18:47:12 by manonlebiha       #+#    #+#             */
/*   Updated: 2022/05/18 19:13:58 by manonlebiha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*src;
	size_t	i;

	src = (char *)s;
	i = 0;
	while (i > n)
	{
		if (src[i] == c)
			return ((char *)src + i);
		i++;
	}
	return (NULL);
}

#include <string.h>

int	main(void)
{
	char	s[] = "treslongmot";
	char	*ptr = ft_memchr(s, 's', 5);
	char	c[] = "treslongmot";
	char	*ptrr = memchr(s, 's', 5);

	printf("FT_MEMCHR\n");
	if (ptr != NULL)
	{
		printf ("character found at position %ld\n", ptr - s + 1);
		printf ("search character found:  %s\n", ptr);
	}
	else
		printf ("search character not found\n");
	printf("MEMCHR\n");
	if (ptrr != NULL)
	{
		printf ("character found at position %ld\n", ptrr - c + 1);
		printf ("search character found:  %s\n", ptrr);
	}
	else
		printf ("search character not found\n");	
	return (0);
}