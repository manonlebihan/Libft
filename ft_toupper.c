/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:44:48 by mle-biha          #+#    #+#             */
/*   Updated: 2022/05/10 14:50:00 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

/*#include <stdio.h>
#include <ctype.h>

int	main()
{
	char c;

    c = 'm';
	printf("%c -> %c\n", c, ft_toupper(c));
    printf("%c -> %c\n", c, toupper(c));

    c = 'D';
	printf("%c -> %c\n", c, ft_toupper(c));
    printf("%c -> %c\n", c, toupper(c));

    c = '9';
	printf("%c -> %c\n", c, ft_toupper(c));
    printf("%c -> %c\n", c, toupper(c));

    return 0;
}*/