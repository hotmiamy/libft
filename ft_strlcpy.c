/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-n <llopes-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 14:26:57 by llopes-n          #+#    #+#             */
/*   Updated: 2021/08/30 21:29:38 by llopes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destSize)
{
	unsigned int	srclen;

	srclen = ft_strlen((char *)src);
	if (srclen < destSize)
		ft_memcpy(dest, src, srclen + 1);
	else if (destSize != 0)
	{
		ft_memcpy(dest, src, destSize - 1);
		dest[destSize - 1] = '\0';
	}
	return (srclen);
}
