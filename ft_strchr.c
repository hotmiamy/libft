/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-n <llopes-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 12:28:07 by llopes-n          #+#    #+#             */
/*   Updated: 2021/08/31 15:05:34 by llopes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int c)
{
	int	strlen;

	strlen = ft_strlen((char *)string) + 1;
	if (*string != '\0')
	{
		while (strlen--)
		{
			if (*string == c)
				return ((char *)string);
			string++;
		}
	}
	else
		return ((char *)string);
	return (0);
}
