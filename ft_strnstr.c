/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-n <llopes-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 20:44:14 by llopes-n          #+#    #+#             */
/*   Updated: 2021/09/02 17:19:39 by llopes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *bigStr, const char *littleStr, size_t len)
{
	size_t	littLen;

	littLen = ft_strlen(littleStr);
	if (*littleStr == '\0')
		return ((char *)bigStr);
	while (*bigStr != '\0' && len--)
	{
		if (*bigStr == *littleStr)
		{
			if (littLen > len)
				return (0);
			if (ft_strncmp(bigStr, littleStr, littLen) == 0)
				return ((char *)bigStr);
		}
		bigStr++;
	}
	return (0);
}
