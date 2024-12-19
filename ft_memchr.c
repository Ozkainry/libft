/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oztozdem <oztozdem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:10:05 by oztozdem          #+#    #+#             */
/*   Updated: 2024/12/19 10:39:43 by oztozdem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*tabs;

	i = 0;
	tabs = (unsigned char *)s;
	while (i < n)
	{
		if (tabs[i] == (unsigned char)c)
			return (tabs + i);
		i++;
	}
	return (0);
}
