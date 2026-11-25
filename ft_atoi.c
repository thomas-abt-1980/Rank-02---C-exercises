/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabt <thomas.abt@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 11:07:57 by tabt              #+#    #+#             */
/*   Updated: 2026/11/25 11:34:12 by tabt             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str)
{
	int		sign	=	1;
	int		i		=	0;
	int		result	=	0;

	
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] -'0');
		i++;
	}
	
	return (result * sign);
}

int	main(void)
{
	const char	*str;
	int			result;

	str = "   -1234568abc45";
	result = ft_atoi(str);
	printf("Original: %s\n", str);
	printf("Ergebnis: %d\n", result);
	return (0);
}
