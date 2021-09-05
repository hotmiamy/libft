/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-n <llopes-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 16:51:41 by llopes-n          #+#    #+#             */
/*   Updated: 2021/09/05 17:13:17 by llopes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		strlen;
	char	*allocStr;

	strlen = ft_strlen(str) + 1;
	allocStr = malloc(strlen * sizeof(char *));
	ft_strlcpy(allocStr, str, strlen);
	return (allocStr);
}
