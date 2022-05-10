/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 11:29:00 by y mle-biha        #+#    #+#             */
/*   Updated: 2022/05/10 11:44:30 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int arg)
{
	if ((arg >= 'A' && arg <= 'Z') || (arg >= 'a' && arg <= 'z')
		|| (arg >= '0' && arg <= '9'))
		return (1);
	return (0);
}

/*#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;
    c='5';
    printf("Result when numeric character is passed (with ft): %d\n", ft_isalnum(c));
    printf("Result when numeric character is passed (with og): %d\n", isalnum(c));

	c='a';
    printf("Result when alpha character is passed (with ft): %d\n", ft_isalnum(c));
    printf("Result when alpha character is passed (with og): %d\n", isalnum(c));
    
	c='+';
    printf("Result when non-numeric character is passed (with ft): %d\n", ft_isalnum(c));
    printf("Result when non-numeric character is passed (with og): %d\n", isalnum(c));

    c=' ';
    printf("Result when nothing is passed (with ft): %d\n", ft_isalnum(c));
    printf("Result when nothing is passed (with og): %d\n", isalnum(c));

    return 0;
}*/