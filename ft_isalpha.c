/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:29:11 by mle-biha          #+#    #+#             */
/*   Updated: 2022/05/10 11:44:01 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;
    c='a';
    printf("Result when alpha character is passed (with ft): %d\n", ft_isalpha(c));
    printf("Result when alpha character is passed (with og): %d\n", isalpha(c));

    c='4';
    printf("Result when numeric character is passed (with ft): %d\n", ft_isalpha(c));
    printf("Result when numeric character is passed (with og): %d\n", isalpha(c));

    c=' ';
    printf("Result when nothing is passed (with ft): %d\n", ft_isalpha(c));
    printf("Result when nothing is passed (with og): %d\n", isalpha(c));

    return 0;
}*/