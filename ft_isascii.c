/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 11:48:18 by mle-biha          #+#    #+#             */
/*   Updated: 2022/05/10 12:27:49 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;
    c = '5';
    printf("Result when numeric character is passed (with ft): %d\n", ft_isascii(c));
    printf("Result when numeric character is passed (with og): %d\n", isascii(c));

	c = 'a';
    printf("Result when alpha character is passed (with ft): %d\n", ft_isascii(c));
    printf("Result when alpha character is passed (with og): %d\n", isascii(c));

    c = '+';
    printf("Result when non-numeric character is passed (with ft): %d\n", ft_isascii(c));
    printf("Result when non-numeric character is passed (with og): %d\n", isascii(c));

    c = ' ';
    printf("Result when nothing is passed (with ft): %d\n", ft_isascii(c));
    printf("Result when nothing is passed (with og): %d\n", isascii(c));

    return 0;
}*/