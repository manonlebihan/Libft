/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manonlebihan <manonlebihan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 14:30:28 by mle-biha          #+#    #+#             */
/*   Updated: 2022/05/31 00:11:39 by manonlebiha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dst_size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	while (dst[i])
		i++;
	j = 0;
	while (src[j])
		j++;
	if (dst_size < i)
		j = j + dst_size;
	else
		j = j + i;
	k = 0;
	while (src[k] != '\0' && i < (dst_size - 1) && dst_size != 0)
	{
		dst[i] = src[k];
		i++;
		k++;
	}
	dst[i] = '\0';
	return (j);
}
