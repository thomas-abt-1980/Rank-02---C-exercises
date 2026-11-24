/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabt <thomas.abt@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 14:24:13 by tabt              #+#    #+#             */
/*   Updated: 2026/11/24 15:06:21 by tabt             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		write (1, "\n", 1);
			return (0);
	}
	
	char	*s		=		argv[1];
	char	c;
	char	d;
	int		i		=		0;

	while (s[i] != '\0')
	{
		d = s[i];
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			c = s[i] - 97;
			d = d + (26 -c) - c;
		}
		/* else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			c = s[i] - 65;
			d = 'Z' - c;
		} */
		write (1, &d, 1);	
	i++;
	}
	write (1, "\n", 1);
	return (0);
}