/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:02:10 by mle-biha          #+#    #+#             */
/*   Updated: 2022/06/01 15:35:14 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <stdlib.h>
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = ft_strlen(s1);
	s2 = malloc(30);
	while (s1[0] != set[j])
		j++;

// gonna need substr
// Faire un malloc qql part
// Vérification si allocation a marché
    //if (s2 == NULL)
     //   return (NULL);
// valeur retournée (new string : s2)
	return (s2);
}

int	main(void)
{
	char	*s1;
	char	*set;
	char	*s3;

	s1 = "Manon est gentille";
	set = "Me";
	s3 = ft_strtrim(s1, set);
	printf("%s\n", s3);
}
 */