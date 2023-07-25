/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddidenko <ddidenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 17:41:48 by ddidenko          #+#    #+#             */
/*   Updated: 2023/05/18 13:58:29 by ddidenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	unsigned const char	*s;

	d = dst;
	s = src;
	if (!dst && !src)
		return (0);
	if (dst < src)
	{
		while (len--)
	*d++ = *s++;
	}
	else
	{
		while (len--)
		d[len] = s[len];
	}
	return (dst);
}
