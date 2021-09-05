/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-n <llopes-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 17:25:26 by llopes-n          #+#    #+#             */
/*   Updated: 2021/09/03 18:09:38 by llopes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_isspace(char *number)
{
	while ((*number >= '\a' && *number <= '\r') || *number == ' ')
		number++;
	return (number);
}

int	ft_isoverload(int number, char lastdig, int sig)
{
	int	int_max;
	int	int_min;

	int_max = 2147483647;
	int_min = -2147483648;
	if (number > int_max / 10 || (number == int_max / 10 && lastdig - '0' > 7))
	{
		if (sig == -1)
			return (-2147483648);
		else
			return (2147483647);
	}
	return (0);
}

int	ft_atoi(const char *numstr)
{
	int	index;
	int	sig;
	int	numint;

	index = 0;
	numint = 0;
	sig = 1;
	numstr = ft_isspace((char *)numstr);
	if (numstr[index] == '-' || numstr[index] == '+')
	{
		sig = 1 - 2 * (numstr[index] == '-');
		index++;
	}
	while (ft_isdigit(numstr[index]) != 0)
	{
		if (ft_isoverload(numint, numstr[index], sig) != 0)
			return (ft_isoverload(numint, numstr[index], sig));
		numint = numint * 10 + (numstr[index++] - '0');
	}
	if (numint > 0)
		return (numint * sig);
	return (0);
}
