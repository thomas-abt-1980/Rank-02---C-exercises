/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabt <thomas.abt@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/25 11:36:59 by tabt              #+#    #+#             */
/*   Updated: 2026/11/25 14:35:25 by tabt             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_rrange(int start, int end)
{
	size_t		len		=	0;
	size_t		i		=	0;
	int			*array;
	int			value_end	=	end;

	if (start < end)
		len = end - start +1;
	else
		len = start - end +1;
	array = malloc(len * sizeof(int));
	if (array == NULL)
		return (NULL);
	if (start < end)
	{
		while(i < len)
		{
			array[i] = value_end;
			value_end--;
			i++;
		}
	}
	else
	{
		while (i < len)
		{
			array[i] = value_end;
			value_end++;
			i++;
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

    result = ft_rrange(start, end);
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


/* Assignment name  : ft_rrange
Expected files   : ft_rrange.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int     *ft_rrange(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at end and end at start (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 3, 2 and 1
- With (-1, 2) you will return an array containing 2, 1, 0 and -1.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing -3, -2, -1 and 0.

Prototype / program

int     *ft_rrange(int start, int end); 

Examples
Input
With (1, 3) you will return an array containing 3, 2 and 1
Output
Input
With (-1, 2) you will return an array containing 2, 1, 0 and -1.
Output
Input
With (0, 0) you will return an array containing 0.
Output
Input
With (0, -3) you will return an array containing -3, -2, -1 and 0.
 */