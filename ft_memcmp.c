/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-n <llopes-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 19:57:51 by llopes-n          #+#    #+#             */
/*   Updated: 2021/09/01 20:37:07 by llopes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *byte1, const void *byte2, size_t len)
{
	unsigned char	*castByte1;
	unsigned char	*castByte2;

	castByte1 = (unsigned char *)byte1;
	castByte2 = (unsigned char *)byte2;
	if (!len)
		return (0);
	while (--len)
	{
		if (*castByte1 != *castByte2)
			break ;
		castByte1++;
		castByte2++;
	}
	return (*castByte1 - *castByte2);
}
