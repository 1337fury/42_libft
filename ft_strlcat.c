/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeel-o < abdeel-o@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 23:58:15 by abdeel-o          #+#    #+#             */
/*   Updated: 2022/10/05 16:48:40 by abdeel-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t			i;
	size_t			srclen;
	size_t			destlen;
	size_t			result;

	i = 0;
	if (!dest && !size)
		return (0);
	srclen = ft_strlen(src);
	destlen = ft_strlen(dest);
	if (destlen < size)
		result = destlen + srclen;
	else
	{
		result = srclen + size;
		return (result);
	}
	while (src[i] != '\0' && destlen < (size - 1))
	{
		dest[destlen] = src[i];
		i++;
		destlen++;
	}
	dest[destlen] = '\0';
	return (result);
}
