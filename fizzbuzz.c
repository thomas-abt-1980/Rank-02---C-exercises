/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabt <thomas.abt@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 11:16:01 by tabt              #+#    #+#             */
/*   Updated: 2026/11/19 13:04:58 by tabt             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	char	*f;
	char	*b;
	int		i;
	char	c;
	int		j;
	int		k;


	i = 1;
	f = "fizz";
	b = "buzz";
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write (1,"fizzbuzz", 8);
		else if (i % 3 == 0 )
			write (1, f, 4);

		else if (i % 5 == 0)
			write (1, b, 4);
		k = i;
		j = 1;
		while (k / j >= 10)
			j *= 10;
		if (i % 3 != 0 && i % 5 != 0)
		{
			while (j > 0)
			{
				c = (k / j) + '0';
				write(1, &c, 1);
				k %= j;
				j /= 10;
			}
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}

