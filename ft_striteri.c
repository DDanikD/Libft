/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddidenko <ddidenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:53:41 by ddidenko          #+#    #+#             */
/*   Updated: 2023/05/26 15:42:39 by ddidenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[i] != '\0')
	{
		f (i, s + i);
		i++;
	}
}

// void print_character(unsigned int index, char* character) {
//     printf("Index: %d, Character: %c\n", index, *character);
// }

// void uppercase_character(unsigned int index, char* character) {
//     if (*character >= 'a' && *character <= 'z') {
//         *character -= 32; // Преобразование в заглавную букву
//     }
// }
// int main() {
//     char str[] = "Hello, World!";

//     printf("Original string: %s\n", str);
//     ft_striteri(str, print_character);
//     printf("\n");
//     printf("Uppercase string: ");
//     ft_striteri(str, uppercase_character);
//     printf("%s\n", str);

//     return 0;
// }