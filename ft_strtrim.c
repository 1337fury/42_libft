/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeel-o < abdeel-o@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 19:06:24 by abdeel-o          #+#    #+#             */
/*   Updated: 2022/10/11 22:39:02 by abdeel-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checker(const char c, const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static char	*ft_alloc_result(const char *s1, char *res, int start, int end)
{
	int	i;

	i = 0;
	res = (char *)malloc(sizeof(char) * (end - start + 1) + 1);
	if (!res)
		return (NULL);
	while (s1[start] && start <= end)
		res[i++] = s1[start++];
	res[i] = '\0';
	return (res);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		start;
	int		end;

	if (!s1 || !set)
		return (NULL);
	res = NULL;
	end = ft_strlen(s1) - 1;
	start = 0;
	while (s1[start])
	{
		if (!ft_checker(s1[start], set))
			break ;
		start++;
	}
	if (s1[start] == '\0')
		return (ft_calloc(1, 1));
	while (end >= 0)
	{
		if (!ft_checker(s1[end], set))
			break ;
		end--;
	}
	return (ft_alloc_result(s1, res, start, end));
}
