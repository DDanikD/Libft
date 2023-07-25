/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddidenko <ddidenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:10:44 by ddidenko          #+#    #+#             */
/*   Updated: 2023/05/26 14:38:57 by ddidenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ptr;

	i = 0;
	if (s == NULL)
		return (NULL);
	ptr = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (ptr == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// char identity(unsigned int index, char c) {
//     return c + 1; // Возвращаем символ без изменений
// }
// int main()
// {
//     // Проверка функции ft_strmapi без изменений кода

//     char input[] = "Hello, World!";
//     char *result = ft_strmapi(input, identity);

//     printf("Input: %s\n", input);
//     printf("Result: %s\n", result);

//     free(result);
//     return 0;
// }