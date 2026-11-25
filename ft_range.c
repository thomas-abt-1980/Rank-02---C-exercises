/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabt <thomas.abt@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/25 07:32:52 by tabt              #+#    #+#             */
/*   Updated: 2026/11/25 09:34:32 by tabt             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int     *ft_range(int start, int end)
{
	size_t	size;
	size_t	i		=	0;
	int		*array;
	int		wert_s	=	start;

	if (start > end)
		size = start - end + 1;
	else
		size = end - start + 1;
	array = malloc(size * sizeof(int));
	if (array == NULL)
		return (NULL);
	
	if (start < end)
	{
		while (i < size)
		{
			array[i] = wert_s;
			i++;
			wert_s++;
		}
	}
	else
	{
		while (i < size)
		{
			array[i] = wert_s;
			i++;
			wert_s--;
		}
	}
	return (array);
}

int main(int argc, char **argv)
{
    int     start;
    int     end;
    int     *result;
    size_t  size;
    size_t  i = 0;

	if (argc != 3)
	{
		printf("Du könntest mit ./a.out arg[1] und arg[2] starten !!!\n");
			return (1);
	}
	start 	=	atoi(argv[1]);
	end		=	atoi(argv[2]);
	
    if (start > end)
        size = start - end + 1;
    else
        size = end - start + 1;

    result = ft_range(start, end);
    if (result == NULL)
        return (1);

    while (i < size)
    {
        printf("array [%zu] : %d\n", i, result[i]);
        i++;
    }
    free(result);
    return (0);
}