/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:02:10 by mle-biha          #+#    #+#             */
/*   Updated: 2022/06/03 16:45:49 by mle-biha         ###   ########.fr       */
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
	while (ft_strchr(set, s1[i]))
		i++;
	while (ft_strchr(set, s1[j--]))
	s2 = ft_substr(s1, i, j + 1);
	return (s2);
}

/* int	main(void)
{
	char	*s1;
	char	*set;
	char	*s3;

	s1 = "coucou les zamis de 42 paris";
	set = "siuoc";
	s3 = ft_strtrim(s1, set);
	printf("%s\n", s3);
}
 */

/* char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = ft_strlen(s1);
	k = ft_strlen(set);

	ft_strlcpy(s2, s1, (j + 1));
	while (i != k && s2[0] != set[i])
		i++;
	if (s2[0] == set[i])
		s2 = ft_substr(s2, 1, j);
	i = 0;
	j = ft_strlen(s2);
	while (i != k && s2[j] != set[i])
		i++;
	if (s2[j] == set[i])
		s2 = ft_substr(s2, 0, (j - 1));
	return (s2);
}
 */