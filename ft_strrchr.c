/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeel-o < abdeel-o@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 14:32:16 by abdeel-o          #+#    #+#             */
/*   Updated: 2022/10/13 15:05:26 by abdeel-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*ps;
	int		l;

	l = 0;
	ps = (char *)s;
	while (s[l])
		l++;
	while (l >= 0)
	{
		if (ps[l] == (char)c)
			return (&ps[l]);
		l--;
	}
	return (0);
}
// The strrchr() function is identical to strchr() 
//except it locates the last occurrence of c.