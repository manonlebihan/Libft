/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 12:42:47 by mle-biha          #+#    #+#             */
/*   Updated: 2022/05/11 14:44:19 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	index;
	unsigned int	src_size;

	index = 0;
	src_size = 0;
	while (src[src_size] != '\0')
		src_size++;
	if (size == 0)
		return (src_size);
	while (index < (size - 1) && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (src_size);
}

/*#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char	dest[10] = " ";
	char	dest2[10] = " "; 
	char	src[20] = "HelloTheWorld";

	printf("%d | %s\n%ld | %s", ft_strlcpy(dest, src, 6), dest, strlcpy(dest2, src, 6), dest2);
	return (0);
}*/