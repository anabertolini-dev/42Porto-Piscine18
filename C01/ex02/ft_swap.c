/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 14:45:39 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/09/08 14:57:46 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;
	a = 10;
	b = 20;
	
	printf("a=%d,b=%d\n",a,b);
	ft_swap(&a, &b);
	printf("a=%d,b=%d\n",a,b);
	return (0);
}
*/
