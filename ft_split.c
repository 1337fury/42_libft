/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeel-o < abdeel-o@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 01:28:35 by abdeel-o          #+#    #+#             */
/*   Updated: 2022/10/13 11:05:10 by abdeel-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	counter(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s != '\0' && *s == c)
		s++;
	while (*s != '\0')
	{
		count++;
		while (*s && *s != c)
			s++;
		while (*s && *s == c)
			s++;
	}
	return (count);
}

static int	word_length(char const *str, char c)
{
	int	l;

	l = 0;
	while (str[l] && str[l] != c)
		l++;
	return (l);
}

static char	**sub_split(char **res, char const *s, char c, int words_count)
{
	int		i;
	int		j;
	int		word_len;

	i = 0;
	while (*s && *s == c)
		s++;
	while (i < words_count)
	{
		while (*s && *s == c)
			s++;
		word_len = word_length(s, c);
		res[i] = (char *)malloc(sizeof(char) * word_len + 1);
		j = 0;
		while (j < word_len)
		{
			res[i][j] = *s;
			j++;
			s++;
		}
		res[i][j] = '\0';
		i++;
	}
	res[i] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		words_count;

	if (!s)
		return (NULL);
	words_count = counter(s, c);
	res = (char **)malloc(sizeof(char *) * (words_count + 1));
	if (!res)
		return (NULL);
	res = sub_split(res, s, c, words_count);
	return (res);
}

// {=1=} count how many words in string
// {=2=} alloc res pointer with full size (len of all words) + 1 -
// for null poninter
// {=3=} calc the len of words + 1 (null character),
// and start alloc each word one by one
