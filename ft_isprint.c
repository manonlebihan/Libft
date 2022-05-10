/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 12:36:35 by mle-biha          #+#    #+#             */
/*   Updated: 2022/05/10 12:58:51 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int c;
    c = '5';
    printf("Result when numeric character is passed (with ft): %d\n", ft_isprint(c));
    printf("Result when numeric character is passed (with og): %d\n", isprint(c));

	c = 'a';
    printf("Result when alpha character is passed (with ft): %d\n", ft_isprint(c));
    printf("Result when alpha character is passed (with og): %d\n", isprint(c));

    c = '+';
    printf("Result when non-numeric character is passed (with ft): %d\n", ft_isprint(c));
    printf("Result when non-numeric character is passed (with og): %d\n", isprint(c));
    
    c = '\n';
    printf("Result when a non-printable character is passed: %d\n", ft_isprint(c));
    printf("Result when non-numeric character is passed (with og): %d\n", isprint(c));

    c = ' ';
    printf("Result when nothing is passed (with ft): %d\n", ft_isprint(c));
    printf("Result when nothing is passed (with og): %d\n", isprint(c));

    return 0;
}*/