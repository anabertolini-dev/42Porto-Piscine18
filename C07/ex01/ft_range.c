/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 13:01:40 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/09/19 13:21:42 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
		return (0);
	range = malloc((max - min) * (sizeof(int)));
	if (range == 0)
		return (0);
	i = 0;
	while (i < (max - min))
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*range;
	int	i;
	int	min;
	int	max;
	
	min = 3;
	max = 7;	
	range = ft_range(min, max);
	i = 0;
	while (i < (max - min))
	{
		printf("%d\n", range[i]);
		i++;
	}
	free(range);
	return (0);
}*/
