/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manonlebihan <manonlebihan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:02:10 by mle-biha          #+#    #+#             */
/*   Updated: 2022/06/10 23:49:47 by manonlebiha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(s1);
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (ft_strchr(set, s1[i]))
		i++;
	while (ft_strchr(set, s1[j]) && j > i)
		j--;
	s2 = ft_substr(s1, i, (j - i + 1));
	printf("hello: ey %c", s2[0]);
	if (s2 == NULL)
		printf("NULL");
	return (s2);
}

int	main(void)
{
	char	*s1;
	char	*set;
	char	*s3;

	s1 = "          ";
	set = " ";
	s3 = ft_strtrim(s1, set);
	printf("%s\n", s3);
}
