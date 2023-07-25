/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddidenko <ddidenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 16:36:06 by ddidenko          #+#    #+#             */
/*   Updated: 2023/05/27 17:01:04 by ddidenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*current;
	int		counter;

	current = lst;
	counter = 0;
	while (current != NULL)
	{
		++counter;
		current = current->next;
	}
	return (counter);
}

// #include <stdio.h>

// int main(void) {
//     t_list *head;
//     head = ft_lstnew("first node");
//     head->next = ft_lstnew("second node");
//     head->next->next = ft_lstnew("third node");

//     printf("The number of nodes in the list is: %d\n", ft_lstsize(head));

//     return 0;
// }