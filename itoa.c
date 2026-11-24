/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabt <tabt@learner.42.tech>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 17:42:31 by tabt              #+#    #+#             */
/*   Updated: 2026/11/24 04:39:50 by tabt             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

char	*ft_itoa(int n)
{
	char		*str;
	long int	x		=	n;
	long int	y;
	int			sign	=	1;
	int			i		=	0;

	if (x < 0)
	{
		sign = -1;
		x *= sign;
		i = 1;
	}
	y = x;
	if (x == 0)
		i = 1;
	while (x > 0)
	{
		x/=10;
		i++;
	}
	str = malloc(i +1);
	if (str == NULL)
		return (NULL);
	str[i] = '\0';

	while (i > 0)
	{
		i--;
		str[i] = y % 10 + '0';
		y /= 10;
	}

	if (sign == -1)
		str[0] = '-';
	return (str);
}

int	main(void)
{
	char	*result;
result	=	ft_itoa(214748364);
printf("%s\n", result);
/* ft_itoa(42);
ft_itoa(-42);
ft_itoa(2147483647);
ft_itoa(-2147483648); */
return (0);
}