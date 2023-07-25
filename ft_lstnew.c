/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddidenko <ddidenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 13:33:13 by ddidenko          #+#    #+#             */
/*   Updated: 2023/05/27 14:55:41 by ddidenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (NULL == node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

// int main()
// {
//     // Создаем новый узел списка с помощью функции ft_lstnew
//     int data = 42;
//     t_list *newNode = ft_lstnew(&data);

//     // Проверяем, был ли создан узел успешно
//     if (newNode == NULL)
//     {
//         printf("Ошибка: не удалось создать новый узел списка.\n");
//         return 1;
//     }

//     // Выводим значение, хранящееся в поле content нового узла
//     printf("cox знач: %d\n", *(int *)(newNode->content));

//     // Освобождаем память, занятую узлом списка
//     free(newNode);

//     return 0;
// }