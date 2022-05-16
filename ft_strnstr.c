/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:29:55 by mle-biha          #+#    #+#             */
/*   Updated: 2022/05/16 14:47:33 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnstr(const char *str, const char *searched_str, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (searched_str[0] == '\0')
		return ((char *)str);
	while (i < len && str[i] != '\0')
	{
		while (str[i] != '\0' && searched_str[j] != '\0'
			&& str[i] == searched_str[j])
		{
			i++;
			j++;
		}
		if (searched_str[j] == '\0')
			return ((char *)&str[i - j]);
		i = i - j + 1;
	}
	return (0);
}

#include <bsd/string.h>

int	main(void)
{
	char str[] = "hello the big world and hello manon";
	char searched_str[] = "the";

	if (ft_strnstr(str, searched_str, 9) == NULL)
		printf("NULL FT\n");
	else
		printf("%s\n", ft_strnstr(str, searched_str, 9));
	if (strnstr(str, searched_str, 9) == NULL)
		printf("NULL OG");
	else
		printf("%s\n", strnstr(str, searched_str, 9));
	return (0);

}
