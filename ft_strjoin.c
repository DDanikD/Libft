/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddidenko <ddidenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 13:35:37 by ddidenko          #+#    #+#             */
/*   Updated: 2023/05/24 14:28:21 by ddidenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	buf;
	size_t	i;
	char	*ptr;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	buf = ft_strlen(s1) + ft_strlen(s2) + 1;
	ptr = malloc(buf);
	if (ptr == NULL)
		return (NULL);
	while (*s1)
		*(ptr + i++) = *s1++;
	while (*s2)
		*(ptr + i++) = *s2++;
	*(ptr + i) = '\0';
	return (ptr);
}

/* #include <stdio.h>
int main()
{
	printf("%s", ft_strjoin("Kak Dela", " kaban"));
	return (0);
}*/