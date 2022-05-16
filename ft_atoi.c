/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 15:24:20 by mle-biha          #+#    #+#             */
/*   Updated: 2022/05/16 15:09:31 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	else
		return (0);
}

int	ft_issign(char c)
{
	if (c == '+' || c == '-')
		return (1);
	else
		return (0);
}

int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int	index;
	int	sign;
	int	value;

	index = 0;
	while (str[index] != '\0' && ft_isspace(str[index]) != 0)
		index++;
	sign = 1;
	if (ft_issign(str[index]) != 0)
	{
		if (str[index] == '-')
			sign = -1;
		index++;
	}
	value = 0;
	while (str[index] != '\0' && ft_isdigit(str[index]) != 0)
	{
		value = value * 10 + str[index] - '0';
		index++;
	}
	return (sign * value);
}
