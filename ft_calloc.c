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

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	if ((nmemb * size) < nmemb || (nmemb * size) < size)
		return (NULL);
	if ((nmemb == 0) || (size == 0))
		return (malloc(1));
	p = malloc(nmemb * size);
	ft_bzero(p, nmemb * size);
	return (p);
}
