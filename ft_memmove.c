/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-n <llopes-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 15:26:41 by llopes-n          #+#    #+#             */
/*   Updated: 2021/08/30 21:14:06 by llopes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*castDst;
	unsigned char	*castSrc;

	castDst = (unsigned char *)dest;
	castSrc = (unsigned char *)src;
	if (dest > src)
	{
		while (len--)
		{
			castDst[len] = castSrc[len];
		}
		return (castDst);
	}
	else
	{
		return (ft_memcpy (dest, src, len));
	}
}
