/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oztozdem <oztozdem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:11:49 by oztozdem          #+#    #+#             */
/*   Updated: 2024/12/19 10:39:52 by oztozdem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tabs;
	unsigned char	*tabd;

	if (!dest && !src)
		return (NULL);
	tabs = (unsigned char *)src;
	tabd = (unsigned char *)dest;
	if (dest > src)
	{
		while (n != 0)
		{
			tabd[n - 1] = tabs[n - 1];
			n--;
		}
	}
	else
		tabd = ft_memcpy(dest, src, n);
	return (dest);
}
