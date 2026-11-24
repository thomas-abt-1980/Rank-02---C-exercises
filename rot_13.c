/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabt <thomas.abt@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 07:33:16 by tabt              #+#    #+#             */
/*   Updated: 2026/11/24 08:59:15 by tabt             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*s;
	char	c;
	int		i		=	0;

	s = argv[1];

	if (argc == 1)
	{
		write(1, "\n", 1);
		return (0);
	}

	if (argc == 2)
	{
		while (s[i] != '\0')
		{
			c = s[i];
			if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
				c = s[i] + 13;
			else if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
				c = s[i] - 13;
			i++;
			write (1, &c, 1);
		}

		write (1, "\n", 1);
	}
	if (argc >= 3)
	{
		write(1, "Fehler: zu viele argumente\n", 27);
			return (0);
	}
	return (0);
}
