/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeel-o < abdeel-o@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 03:46:51 by abdeel-o          #+#    #+#             */
/*   Updated: 2022/10/08 19:29:56 by abdeel-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(long number)
{
	int	l;
	int	is_negative;

	is_negative = 0;
	l = 0;
	if (number == 0)
		return (1);
	if (number < 0)
	{
		is_negative = 1;
		number = -number;
	}
	while (number != 0)
	{
		number /= 10;
		l++;
	}
	if (is_negative)
		return (l + 1);
	return (l);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	number;
	int		stop;

	stop = 0;
	number = n;
	len = ft_intlen(number);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	if (number < 0)
	{
		stop = 1;
		str[0] = '-';
		number = -number;
	}
	str[len--] = '\0';
	while (len >= stop)
	{
		str[len--] = (number % 10) + 48;
		number /= 10;
	}
	return (str);
}
// {=1=} calc the length of the int and add 1 if the number is negative
// 		+1 for (-) symbol
// {=2=} alloc a place in memory with full lenght of the number +1 for null char
// {=3=} if number < 0 set str[0] to '-' and stop operation in 1
//		else stop in 0;
// {=4=} start operation from the end to start 
