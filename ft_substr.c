/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:01:59 by mle-biha          #+#    #+#             */
/*   Updated: 2022/06/03 18:58:53 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char*	dst;
	size_t	dst_len;
	size_t	s_len;

	// check si pointeur null

	// check si "start" est plus grand que la taille de s

	// taille de la chaine retournée (dst_len):
	// si la taille de s - start est inférieur à len, dst_len  = s_len - start
	// sinon, dst_len = len

	// allocation de la sous-chaine, de taille dst_len + 1 (pour le '\0')

		// copy de &s[start] dans dst

	// retour de dst

}

 /*int	main(void)
{
	char	*src;
	char	*dst;
	int		start;
	int		len;

	src = "tripouille";
	start = 0;
	len = 42000;
	dst = ft_substr(src, start, len);
	printf("%s\n", dst);
	free(dst);
	return (0);
}*/
