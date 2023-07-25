/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddidenko <ddidenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 17:13:04 by ddidenko          #+#    #+#             */
/*   Updated: 2023/05/23 18:29:19 by ddidenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		len;

	len = ft_strlen(s1) + 1;
	ptr = malloc(len);
	if (NULL == ptr)
		return (NULL);
	ft_strlcpy(ptr, s1, len);
	return (ptr);
}

/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    const char *source = "Hello, world!";
    char *duplicate = ft_strdup(source);

    if (duplicate) {
        printf("Source string: %s\n", source);
        printf("Duplicate string: %s\n", duplicate);

        // Модифицируем дубликат строки
        duplicate[0] = 'h';
        printf("Modified duplicate string: %s\n", duplicate);

        // Освобождаем выделенную память
        free(duplicate);
    } else {
        printf("Failed to duplicate string.\n");
    }

    return 0;
}*/