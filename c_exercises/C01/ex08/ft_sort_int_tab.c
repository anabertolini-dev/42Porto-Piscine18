/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 16:55:21 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/09/08 17:02:28 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	count;

	count = 0;
	while (count < size)
	{
		i = 0;
		j = i + 1;
		while (i < size - 1)
		{
			if (tab[i] > tab[j])
				ft_swap(&tab[i], &tab[j]);
			i++;
			j++;
		}
		count++;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int	tab[4];
	int	size;
	int	i;

	tab[0] = 6;
	tab[1] = 4;
	tab[2] = 1;
	tab[3] = 8;
	size = 4;
	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	ft_sort_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	return (0);
}
*/
