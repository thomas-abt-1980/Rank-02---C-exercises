/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabt <thomas.abt@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 13:18:06 by tabt              #+#    #+#             */
/*   Updated: 2026/11/24 13:49:54 by tabt             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	#include<unistd.h>

	int main(int argc, char **argv)
	{
		char 	*s	=	argv[1];
		int		i	=	0;
		
		if (argc != 4 || argv[2][1] != '\0' || argv[3][1] != '\0')
		{
			write (1, "\n", 1);
				return (0);
		}
		char	c	=	argv[2][0];
		char	x	=	argv[3][0];

		while (s[i] != '\0')
		{
			if (s[i] != c)
				write (1, &s[i], 1);
			else
				write (1, &x, 1);
			i++;
		}
		write (1, "\n", 1);
		return (0);
	}
