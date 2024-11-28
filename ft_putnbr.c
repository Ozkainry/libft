/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oztozdem <oztozdem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:43:22 by oztozdem          #+#    #+#             */
/*   Updated: 2024/11/28 14:54:09 by oztozdem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_len(int n, int *len)
{
	unsigned int	b;

	if (n < 0)
	{
		ft_putchar_len('-', len);
		n = n * -1;
		b = n;
	}
	else
		b = n;
	if (b >= 10)
	{
		ft_putnbr_len(b / 10, len);
		ft_putchar_len(b % 10 + '0', len);
	}
	else
		ft_putchar_len(b + '0', len);
}

void	ft_putnbr_unsigned(unsigned int n, int *len)
{
	if (n >= 10)
		ft_putnbr_unsigned(n / 10, len);
	ft_putchar_len(n % 10 + '0', len);
}

void	ft_putnbr_hexa(unsigned int n, char *base, int *len)
{
	if (n > 15)
		ft_putnbr_hexa(n / 16, base, len);
	ft_putchar_len(base[n % 16], len);
}

void	ft_putnbr_hexa2(unsigned long n, char *base, int *len)
{
	if (n > 15)
		ft_putnbr_hexa2(n / 16, base, len);
	ft_putchar_len(base[n % 16], len);
}
