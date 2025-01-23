/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oztozdem <oztozdem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:03:49 by oztozdem          #+#    #+#             */
/*   Updated: 2024/12/13 12:17:08 by oztozdem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	b;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = n * -1;
		b = n;
	}
	else
		b = n;
	if (b >= 10)
	{
		ft_putnbr_fd(b / 10, fd);
		ft_putchar_fd(b % 10 + '0', fd);
	}
	else
	{
		ft_putchar_fd(b + '0', fd);
	}
}
