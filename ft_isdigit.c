/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 13:44:17 by mle-biha          #+#    #+#             */
/*   Updated: 2022/05/10 12:47:08 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}


/*#include <stdio.h>
#include <ctype.h>

int main()
{
    int c;
    c = '5';
    printf("Result when numeric character is passed (with ft): %d\n", ft_isdigit(c));
    printf("Result when numeric character is passed (with og): %d\n", isdigit(c));

    c = '+';
    printf("Result when non-numeric character is passed (with ft): %d\n", ft_isdigit(c));
    printf("Result when non-numeric character is passed (with og): %d\n", isdigit(c));

    c = ' ';
    printf("Result when nothing is passed (with ft): %d\n", ft_isdigit(c));
    printf("Result when nothing is passed (with og): %d\n", isdigit(c));

    return 0;
}*/