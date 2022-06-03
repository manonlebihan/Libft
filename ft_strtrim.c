/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:02:10 by mle-biha          #+#    #+#             */
/*   Updated: 2022/06/03 15:52:36 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

// gonna need substr
// Faire un malloc qql part
// Vérification si allocation a marché
	//if (s2 == NULL)
	//  return (NULL);
// valeur retournée (new string : s2)
	//*s2 = '\0';
// maybe add *set && im=n the while loops
char	*ft_strtrim(char const *s1, char const *set)
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

int	main(void)
{
	char	*s1;
	char	*set;
	char	*s3;

	s1 = "manon east la";
	set = "manger";
	s3 = ft_strtrim(s1, set);
	printf("%s\n", s3);
}
