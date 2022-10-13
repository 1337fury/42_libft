/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeel-o < abdeel-o@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 21:56:54 by abdeel-o          #+#    #+#             */
/*   Updated: 2022/10/05 13:02:25 by abdeel-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*pd;
	unsigned char	*ps;
	size_t			l;

	pd = (unsigned char *)dest;
	ps = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		l = n;
		while (l > 0)
		{
			pd[l - 1] = ps[l - 1];
			l--;
		}
		return (pd);
	}
	else
		return (ft_memcpy(dest, src, n));
}
/* {=*=} If the destination is above the source, we have to copy back
to front to avoid overwriting the data we want to copy. */
// {=*=} If the destination is below the source, we have to copy front to back.

/* #include <string.h>
int main()
{
	char str[8] = "ABCDEFG";
	char *rs = ft_memmove(str + 3, str, 4);
	// char *rs = memmove(str + 3, str, 4);
	printf("%s", rs);
} */