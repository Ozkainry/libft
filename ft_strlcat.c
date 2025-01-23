/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oztozdem <oztozdem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:37:45 by oztozdem          #+#    #+#             */
/*   Updated: 2024/12/13 12:17:28 by oztozdem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	e;

	i = 0;
	j = 0;
	e = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (dst[i] != '\0' && i < size)
	{
		i++;
		j++;
	}
	while (i < size - 1 && src[e] != '\0')
	{
		dst[i] = src[e];
		i++;
		e++;
	}
	if (j < size)
		dst[i] = '\0';
	return (j + ft_strlen(src));
}
