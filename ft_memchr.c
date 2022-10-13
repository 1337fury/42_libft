/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeel-o < abdeel-o@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:36:17 by abdeel-o          #+#    #+#             */
/*   Updated: 2022/10/04 18:25:12 by abdeel-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ps;

	ps = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ps[i] == (unsigned char)c)
			return (&ps[i]);
		i++;
	}
	return (NULL);
}
/* 
{=1=} The memchr() function locates the first occurrence of c 
(converted to an unsigned char) in string s. 
*/
/*
The memchr() function returns a pointer to the byte located, 
or NULL if no such byte exists within n bytes.
*/