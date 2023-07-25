/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddidenko <ddidenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 10:59:42 by ddidenko          #+#    #+#             */
/*   Updated: 2023/05/24 15:22:34 by ddidenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;
	size_t	j;

	i = start;
	j = 0;
	if (start > ft_strlen(s))
		len = 0;
	else if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	new = malloc((len + 1) * (sizeof(char)));
	if (!s || !new)
		return (NULL);
	while (i < ft_strlen(s) && j < len && s[i] != '\0')
		new[j++] = s[i++];
	new[j] = '\0';
	return (new);
}

// #include <stdio.h>

// int main(void)
// {
// 	printf(":%s:\n", ft_substr("hola", 1, 5));
// 	return (0);
// }