/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oztozdem <oztozdem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:00:25 by oztozdem          #+#    #+#             */
/*   Updated: 2024/12/13 12:17:17 by oztozdem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*tabs;

	i = 0;
	tabs = (char *)s;
	c = (char)c;
	while (tabs[i])
	{
		if (tabs[i] == c)
			return (tabs + i);
		i++;
	}
	if (tabs[i] == c)
		return (tabs + i);
	return (NULL);
}
