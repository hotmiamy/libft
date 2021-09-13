/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-n <llopes-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 22:07:04 by llopes-n          #+#    #+#             */
/*   Updated: 2021/09/13 20:45:02 by llopes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nbr, int fd)
{
	static int	boole;

	if (nbr < 0 && boole != 1)
	{
		write(fd, "-", 1);
		boole = 1;
	}
	if (nbr > 9 || (nbr < -9 && nbr < 0))
	{
		ft_putnbr_fd((nbr / 10), fd);
		ft_putnbr_fd((nbr % 10), fd);
	}
	else if (nbr > -10 && nbr < 0)
	{
		ft_putchar_fd(('0' - nbr), fd);
	}
	else if (nbr < 10 && nbr >= 0)
	{
		ft_putchar_fd((nbr + '0'), fd);
	}
}