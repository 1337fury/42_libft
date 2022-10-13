/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeel-o < abdeel-o@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:05:55 by abdeel-o          #+#    #+#             */
/*   Updated: 2022/10/13 14:25:19 by abdeel-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*dest;
	size_t	s;

	s = count * size;
	dest = (char *)malloc(s);
	if (!dest)
		return (NULL);
	ft_memset(dest, 0, s);
	return (dest);
}
//The calloc() function contiguously allocates enough space for count objects
//that are size bytes of memory each and returns a pointer to the 
//allocated memory. The allocated memory is filled with bytes of value zero.