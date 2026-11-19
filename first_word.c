/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabt <thomas.abt@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 07:57:39 by tabt              #+#    #+#             */
/*   Updated: 2026/11/19 13:08:39 by tabt             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// https://rank02.42exam.net/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int 	i	= 	0;
	char	*s;
	
    if (argc == 2)
    {
        s = argv[1]; 
		while (s[i] == '\t' || s[i] == ' ')
            i++;
        while (s[i] !='\0' && s[i] != '\t' && s[i] != ' ' )
        {
            write (1, &s[i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
    return (0);
}


/* Moulinette Rules & Constraints
Allowed functions: None. Use only permitted built-in functions to avoid getting 0 on exam day.
Assignment

Assignment name  : first_word
Expected files   : first_word.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays its first word, followed by a
newline.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline. */