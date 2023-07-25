/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddidenko <ddidenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 16:10:50 by ddidenko          #+#    #+#             */
/*   Updated: 2023/05/23 12:23:55 by ddidenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	j;
	size_t	k;

	j = 0;
	if (!*needle || (NULL == haystack && !len))
		return ((char *)haystack);
	while (*(haystack + j) && j < len)
	{
		k = 0;
		while (*(haystack + j + k) == *(needle + k) && (k + j) < len)
		{
			if (0 == *(needle + k + 1))
				return ((char *)haystack + j);
			++k;
		}
		++j;
	}
	return (NULL);
}
