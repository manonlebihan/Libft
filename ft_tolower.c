/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:51:05 by mle-biha          #+#    #+#             */
/*   Updated: 2022/05/10 14:53:51 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

/*#include <stdio.h>
#include <ctype.h>

int	main()
{
	char c;

    c = 'm';
	printf("%c -> %c\n", c, ft_tolower(c));
    printf("%c -> %c\n", c, tolower(c));

    c = 'D';
	printf("%c -> %c\n", c, ft_tolower(c));
    printf("%c -> %c\n", c, tolower(c));

    c = '9';
	printf("%c -> %c\n", c, ft_tolower(c));
    printf("%c -> %c\n", c, tolower(c));

    return 0;
}*/