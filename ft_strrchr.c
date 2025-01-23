/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oztozdem <oztozdem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:05:29 by oztozdem          #+#    #+#             */
/*   Updated: 2024/12/13 12:17:43 by oztozdem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*tabs;

	i = ft_strlen(s);
	tabs = (char *)s;
	c = (char)c;
	while (i >= 0)
	{
		if (tabs[i] == c)
			return (tabs + i);
		i--;
	}
	return (NULL);
}
