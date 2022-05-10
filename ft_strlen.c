/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:18:59 by mle-biha          #+#    #+#             */
/*   Updated: 2022/05/10 14:32:51 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*#include <stdio.h>
#include <string.h>

int	main()
{
	char	*str  = "Hello World !";

	printf("Length of the string (with ft) = %u\n",ft_strlen(str));
	printf("Length of the string (with og) = %zu\n",strlen(str));

	return 0;
}*/