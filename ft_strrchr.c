/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-n <llopes-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 15:06:09 by llopes-n          #+#    #+#             */
/*   Updated: 2021/09/01 01:17:45 by llopes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	char	*backup;
	char	chr;

	backup = 0;
	while (*string)
	{
		chr = *string;
		if (chr == (unsigned char)c)
			backup = (char *)string;
		string++;
	}
	if (*string == (unsigned char)c)
		backup = (char *)string;
	return (backup);
}
