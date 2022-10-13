/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeel-o < abdeel-o@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 23:08:52 by abdeel-o          #+#    #+#             */
/*   Updated: 2022/10/12 18:31:00 by abdeel-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	while (i <= len)
	{
		if (needle[j] == '\0')
			return ((char *)(&haystack[i - j]));
		if (haystack[i] == needle[j])
			j++;
		else
			j = 0;
		if (haystack[i] == '\0')
			break ;
		i++;
	}
	return (NULL);
}

/*
{=1=}  The strnstr() function locates the first occurrence of the null-terminated
string needle in the string haystack,
where not more than len characters are searched. 
Characters that appear after a `\0'character are not searched.  
Since the strnstr() function is a FreeBSD specific API,
it should only be used when portability is not a concern.
*/
