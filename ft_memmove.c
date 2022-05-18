/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 11:00:15 by mle-biha          #+#    #+#             */
/*   Updated: 2022/05/18 14:04:06 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*cdest;
	char	*csrc;
	size_t	i;

	cdest = (char *)dest;
	csrc = (char *)src;
	i = 0;
	while (i < n)
	{
		cdest[i] = csrc[i];
		i++;
	}
	return (cdest);
}

/* #include <string.h>
int main(void)
{
    char dest[5] = "hello";
    const char src[]  = "manonlbn";
	char destt[5] = "hello";
    const char srcc[]  = "manonlbn";
    printf("Before ft_memmove >> dest = %s, src = %s\n", dest, src);
    ft_memmove(dest, src, 8);
    printf("After ft_memmove >> dest = %s, src = %s\n", dest, src);
    printf("Before memmove >> dest = %s, src = %s\n", destt, srcc);
    memmove(destt, srcc, 8);
    printf("After memmove >> dest = %s, src = %s\n", destt, srcc);
    return (0);
} */