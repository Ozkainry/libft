/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozozdemi <ozozdemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:04:38 by ozozdemi          #+#    #+#             */
/*   Updated: 2022/11/23 12:09:48 by ozozdemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_size(size_t size_str, unsigned int start, size_t len)
{
	if (len > size_str && start > size_str)
		return (1);
	else if (len >= size_str)
		return ((size_str - start) + 1);
	else if (start > len)
		return (1);
	else
		return (len + 1);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	e;
	char	*str;

	if (!s)
		return (NULL);
	e = ft_size(ft_strlen(s), start, len);
	str = malloc(e * sizeof(char));
	if (!str)
		return (0);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}
