/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 11:10:35 by mle-biha          #+#    #+#             */
/*   Updated: 2022/05/18 11:10:37 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	if (b == NULL)
		return (NULL);
	p = b;
	while (len--)
		*p++ = (unsigned char)c;
	return (b);
}
