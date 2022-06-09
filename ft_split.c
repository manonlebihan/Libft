/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manonlebihan <manonlebihan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 10:38:00 by mle-biha          #+#    #+#             */
/*   Updated: 2022/06/09 08:52:11 by manonlebiha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_new_str(char *s, int s_start, int s_finish)
{
	char	*new_str;
	char	i;

	new_str = malloc((s_finish - s_start + 1) * sizeof(char));
	while (i < s_finish)
	{
		i++;
	}
	
}

int	main(void)
{
	char	*s;
	//char	c;
	char	*res;

	s = "manon est la";
	//c = ' ';
	res = ft_new_str(s, 0, 4);

	printf("%d\n", res);
}

char = M A N O N   E S T   L  A
inde = 0 1 2 3 4 5 6 7 8 9 10 11
memo = 1 2 3 4 5 6 7 8 9 10 11 12

M  A  N  O  N \0
13 14 15 16 17 18

ft_new_str("manon est la", 0, 4);