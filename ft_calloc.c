/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oztozdem <oztozdem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:46:46 by oztozdem          #+#    #+#             */
/*   Updated: 2024/12/13 12:16:19 by oztozdem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*dest;
	char	*tab;
	size_t	i;

	dest = NULL;
	i = 0;
	if (nmemb * size == 0 || nmemb <= SIZE_MAX / size)
		dest = (void *)malloc(nmemb * size);
	if (!dest)
		return (NULL);
	tab = (char *)dest;
	while (i < nmemb * size)
	{
		tab[i] = 0;
		i++;
	}
	return (dest);
}
