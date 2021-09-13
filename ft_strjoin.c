/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-n <llopes-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 20:23:55 by llopes-n          #+#    #+#             */
/*   Updated: 2021/09/09 02:12:12 by llopes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *str1, const char *str2)
{
	char	*strConca;
	int		str1len;
	int		strConcalen;

	if (!str1)
		return (0);
	str1len = ft_strlen(str1);
	strConcalen = str1len + ft_strlen(str2) + 1;
	strConca = (char *)malloc(strConcalen * sizeof(char));
	if (!strConca)
		return (0);
	ft_strlcpy(strConca, str1, str1len + 1);
	ft_strlcat(strConca, str2, strConcalen);
	return (strConca);
}
