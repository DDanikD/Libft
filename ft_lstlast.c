/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddidenko <ddidenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 17:04:14 by ddidenko          #+#    #+#             */
/*   Updated: 2023/05/27 17:31:48 by ddidenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

t_list	*ft_lstlast(t_list *lst)
{
	if (NULL == lst)
		return (NULL);
	while (lst->next)
	lst = lst->next;
	return (lst);
}

// int main()
// {
// 	// Создаем пример связного списка
// 	t_list *node1 = malloc(sizeof(t_list));
// 	t_list *node2 = malloc(sizeof(t_list));
// 	t_list *node3 = malloc(sizeof(t_list));

// 	int content1 = 10;
// 	int content2 = 20;
// 	int content3 = 30;

// 	node1->content = &content1;
// 	node1->next = node2;

// 	node2->content = &content2;
// 	node2->next = node3;

// 	node3->content = &content3;
// 	node3->next = NULL;

// 	// Вызываем функцию ft_lstlast для поиска последнего элемента
// 	t_list *last = ft_lstlast(node1);

// 	// Проверяем результат
// 	if (last != NULL)
// 		printf("Последний элемент: %d\n", *(int *)(last->content));
// 	else
// 		printf("Список пуст\n");

// 	// Освобождаем память, выделенную для списка
// 	free(node1);
// 	free(node2);
// 	free(node3);

// 	return 0;
// }