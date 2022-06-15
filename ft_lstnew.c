/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 11:57:46 by mle-biha          #+#    #+#             */
/*   Updated: 2022/06/15 16:43:47 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*element;

	element = ft_calloc(1, sizeof(*element));
	if (element == NULL)
		return (NULL);
	else
	{
		element->content = content;
		element->next = NULL;
	}
	return (element);
}
