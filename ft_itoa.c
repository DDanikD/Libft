/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddidenko <ddidenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 10:35:33 by ddidenko          #+#    #+#             */
/*   Updated: 2023/05/26 12:50:33 by ddidenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

static int	ft_len(int n)
{
	size_t	count;

	count = 0;
	if (n <= 0)
	count++;
	while (n)
	{
	count++;
	n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		len;

	len = ft_len(n);
	ptr = malloc(len + 1);
	if (ptr == NULL)
		return (NULL);
	ptr[len] = '\0';
	if (n == 0)
		ptr[0] = '0';
	else if (n < 0)
		ptr[0] = '-';
	while (n)
	{
		if (n < 0)
			ptr[--len] = (~(n % 10) + 1) + 48;
		else
			ptr[--len] = (n % 10) + 48;
		n /= 10;
	}
	return (ptr);
}

// int main(void)
// {
//     int number = -12345;
//     char *result = ft_itoa(number);

//     if (result != NULL)
//     {
//         printf("Число: %d\nСтрока: %s\n", number, result);
//         free(result); // Освобождение памяти, выделенной для строки
//     }
//     else
//     {
//         printf("Ошибка выделения памяти\n");
//     }

//     return 0;
// }