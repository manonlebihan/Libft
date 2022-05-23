/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manonlebihan <manonlebihan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 11:00:15 by mle-biha          #+#    #+#             */
/*   Updated: 2022/05/23 23:14:59 by manonlebiha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = (char *)dst;
	s = (char *)src;
	if (d < s)
	{
		while (n--)
		*d++ = *s++;
	}
	else
	{
		s = s + n - 1;
		d = d + n - 1;
		while (n--)
			*d-- = *s--;
	}
	return (dst);
}
