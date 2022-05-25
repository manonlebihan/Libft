/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 14:31:23 by mle-biha          #+#    #+#             */
/*   Updated: 2022/05/25 14:31:25 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			i;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	i = 0;
	if (s1 == s2)
		return (0);
	while (n > 0)
	{
		if (*p1 > *p2)
			return (p1 - p2);
		else if (*p2 > *p1)
			return (p1 - p2);
		n--;
		p1++;
		p2++;
	}
	return (0);
}
