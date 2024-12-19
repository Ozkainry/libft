/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oztozdem <oztozdem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 09:45:45 by oztozdem          #+#    #+#             */
/*   Updated: 2024/12/19 10:39:48 by oztozdem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*tabd;
	unsigned char	*tabs;

	if (!dest && !src)
		return (NULL);
	i = 0;
	tabd = (unsigned char *)dest;
	tabs = (unsigned char *)src;
	while (i < n)
	{
		tabd[i] = tabs[i];
		i++;
	}
	return (dest);
}
