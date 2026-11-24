/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabt <tabt@learner.42.tech>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 13:30:02 by tabt              #+#    #+#             */
/*   Updated: 2026/11/22 14:00:28 by tabt             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**array;
	char	*str;
	size_t	words	=	0;
	size_t	start	=	0;
	size_t	end		=	0;
	size_t	i 		=	0;
	size_t	j		=	0;
	size_t	k		=	0;

	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] != '\0' && s[i] != c)
			words++;
		while (s[i] != '\0' && s[i] != c)
			i++;
	}

	array = malloc((words +1) * sizeof(char *));
		if (array == NULL)
			return (NULL);
		array[i] = NULL;
		
	i = 0;

	while (k < words)
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		start = i;
		while (s[i] != '\0' && s[i] != c)
			i++;
		end = i;

		str = malloc(end - start + 1);
		if (str == NULL)
		{
			while (k > 0)
			{
				k--;
				free(array[k]);
			}
		free(array);
		return (NULL);
		}
		while (j < end - start)
		{
			str[j] = s[start + j];
			j++;
		}
		str[j] = '\0';
		array[k] = str;
		k++;
	}
	return (array);
}