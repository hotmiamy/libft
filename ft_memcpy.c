/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-n <llopes-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 22:43:16 by llopes-n          #+#    #+#             */
/*   Updated: 2021/09/09 01:12:59 by llopes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	char	*dest;

	dest = dst;
	if (!dest && !src)
		return (dest);
	while (len--)
	{
		*(char *)dst++ = *(char *)src++;
	}
	return (dest);
}
