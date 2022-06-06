/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 09:57:06 by mle-biha          #+#    #+#             */
/*   Updated: 2022/06/03 17:53:18 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

#define MAX_SIZE_T (size_t)-1

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	if (nmemb > 0 && (MAX_SIZE_T / nmemb) < size)
		return (NULL);
	if ((nmemb == 0) || (size == 0))
	{
		nmemb = 1;
		size = 1;
	}
	p = malloc(nmemb * size);
	ft_bzero(p, nmemb * size);
	return (p);
}
