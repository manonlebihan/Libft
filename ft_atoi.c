/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 14:32:47 by mle-biha          #+#    #+#             */
/*   Updated: 2022/06/03 16:41:34 by mle-biha         ###   ########.fr       */
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

static int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	value;

	i = 0;
	while (str[i] != '\0' && ft_isspace(str[i]) != 0)
		i++;
	sign = 1;
	if (ft_issign(str[i]) != 0)
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	value = 0;
	while (str[i] != '\0' && ft_isdigit(str[i]) != 0)
	{
		value = value * 10 + str[i] - '0';
		i++;
	}
	return (sign * value);
}
