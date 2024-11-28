/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oztozdem <oztozdem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:42:48 by oztozdem          #+#    #+#             */
/*   Updated: 2024/11/28 14:54:14 by oztozdem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_ptr(void *ptr, int *len)
{
	unsigned long	i;

	if (!ptr)
	{
		write(1, "(nil)", 5);
		*len = *len + 5;
	}
	else
	{
		i = (unsigned long) ptr;
		ft_putchar_len('0', len);
		ft_putchar_len('x', len);
		ft_putnbr_hexa2(i, "0123456789abcdef", len);
	}
}
