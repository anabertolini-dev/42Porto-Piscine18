/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 09:58:41 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/05 10:03:22 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Implement the following function:

	int	*ft_range(int start, int end);

	The function must allocate an array of integers using malloc(),
	then fill it with consecutive values from start to end,
	including both start and end.

	The values must be in ascending order if start is less than end,
	or in descending order if start is greater than end.

	The function must return a pointer to the first element of the array.

	Examples:
	- (1, 3) returns an array containing 1, 2, 3.
	- (-1, 2) returns an array containing -1, 0, 1, 2.
	- (0, 0) returns an array containing 0.
	- (0, -3) returns an array containing 0, -1, -2, -3.
*/

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	*array;
	int	size;
	int	i;
	int	step;

	if (start >= end)
	{
		size = start - end + 1;
		step = -1;
	}
	else
	{
		size = end - start + 1;
		step = 1;
	}
	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		array[i] = start;
		start += step;
		i++;
	}
	return (array);
}
