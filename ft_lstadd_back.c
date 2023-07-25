/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddidenko <ddidenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 17:35:10 by ddidenko          #+#    #+#             */
/*   Updated: 2023/05/29 09:49:34 by ddidenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (NULL == lst)
		return ;
	if (NULL == *lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

// int	main()
// {
// 	t_list	*head, *node_1, *node_2;

// 	head = malloc(sizeof(t_list));
// 	node_1 = malloc(sizeof(t_list));
// 	node_2 = malloc(sizeof(t_list));

// 	head->content = (void *)"hello";
// 	node_1->content = (void *)"world";
// 	node_2->content = (void *)"!";

// 	ft_lstadd_back(&head, node_1);
// 	ft_lstadd_back(&head, node_2);

// 	t_list	*current;

// 	current = head;
// 	while (current)
// 	{
// 		printf("%s\n", (char *)(current->content));
// 		current = current->next;
// 	}
// }