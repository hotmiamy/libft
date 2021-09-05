/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-n <llopes-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 14:06:17 by llopes-n          #+#    #+#             */
/*   Updated: 2021/09/01 19:46:09 by llopes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *byte, int chr, size_t len)
{
	unsigned char	*castByte;

	castByte = (unsigned char *)byte;
	while (len--)
	{
		if (*castByte == (unsigned char)chr)
			return (castByte);
		castByte++;
	}
	return (0);
}
