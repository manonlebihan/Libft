/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 17:04:09 by mle-biha          #+#    #+#             */
/*   Updated: 2022/06/15 23:58:45 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstlast(t_list *lst)
{
	if (lst != NULL)
	{
		while (lst->next != NULL)
			lst = lst->next;
	}
	return (lst);
}

void freeList(t_list *head) {if (head) freeList(head->next); free(head);}

int main(void)
{
        t_list * l =  NULL;
		t_list * l2 =  NULL;
        l2 = ft_lstlast(l);
		if (!l2)
			printf("test 1 :l2 est NULL\n");
        ft_lstadd_back(&l, ft_lstnew((void*)1));
        l2 = ft_lstlast(l)->content;
		printf("%p\n", l2);
        ft_lstadd_back(&l, ft_lstnew((void*)2));
        l2 = ft_lstlast(l)->content;
		printf("%p\n", l2);
        l2 = ft_lstlast(l)->next;
		if (!l2)
			printf("test 4 : l2 est NULL\n");
        freeList(l); /* showLeaks();
        write(1, "\n", 1); */
        return (0);
}