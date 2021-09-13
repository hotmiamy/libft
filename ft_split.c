/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-n <llopes-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 16:07:53 by llopes-n          #+#    #+#             */
/*   Updated: 2021/09/08 20:03:50 by llopes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlettles(char *str, char delimiter)
{
	int	numLettles;

	numLettles = 0;
	while (str[numLettles] != delimiter && str[numLettles])
		numLettles++;
	return (numLettles);
}

static int	ft_numWorlds(char *str, char delimiter)
{
	int	index;
	int	numberWorlds;

	index = 0;
	numberWorlds = 0;
	while (str[index])
	{
		if (str[index] != delimiter)
		{
			numberWorlds++;
			while (str[index] != delimiter && str[index])
				index++;
		}
		else
			index++;
	}
	return (numberWorlds);
}

char	**ft_split(char const *str, char chr)
{
	char	**matrix;
	int		numWorlds;
	int		numLettlers;
	int		array;

	if (!str)
		return (0);
	array = 0;
	numWorlds = ft_numWorlds((char *)str, chr);
	matrix = (char **)malloc((numWorlds + 1) * sizeof(char *));
	if (!matrix)
		return (NULL);
	while (array < numWorlds)
	{
		while (*str == chr && *str)
			str++;
		numLettlers = ft_numlettles((char *)str, chr);
		matrix[array] = ft_substr(str, 0, numLettlers);
		str += numLettlers + 1;
		array++;
	}
	matrix[array] = 0;
	return (matrix);
}
