/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oztozdem <oztozdem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:10:07 by oztozdem          #+#    #+#             */
/*   Updated: 2025/01/09 16:43:47 by oztozdem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_sep(char str, char c)
{
	if (c == '\0')
		return (0);
	if (str == c)
		return (1);
	else
		return (0);
}

static int	count_words(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (is_sep(str[i], c))
		i++;
	while (str[i])
	{
		while (str[i] && !is_sep(str[i], c))
			i++;
		if (is_sep(str[i], c) || str[i] == '\0')
			count++;
		while (str[i] && is_sep(str[i], c))
			i++;
	}
	return (count);
}

static int	ft_wordlen(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && !is_sep(str[i], c))
		i++;
	return (i);
}

static void	free_strs(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
	{
		free(strs[i]);
		i++;
	}
	free(strs);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		i;
	int		j;
	int		k;

	strs = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!strs)
		return (NULL);
	i = -1;
	k = 0;
	while (++i < count_words(s, c))
	{
		while (is_sep(s[k], c))
			k++;
		j = -1;
		strs[i] = malloc(sizeof(char) * (ft_wordlen(s + k, c) + 1));
		if (!strs[i])
			return (free_strs(strs), NULL);
		while (s[k] && !is_sep(s[k], c))
			strs[i][++j] = s[k++];
		strs[i][++j] = '\0';
		j = k;
	}
	strs[i] = NULL;
	return (strs);
}
