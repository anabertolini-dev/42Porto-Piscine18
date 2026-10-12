/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 07:53:46 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/09/16 08:08:39 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0 && nb == 0)
	{
		return (1);
	}
	while (power != 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	//resultado esperado: 16
	printf("%d\n", ft_iterative_power(2, 4));

	//resultado esperado: -27
	printf("%d\n", ft_iterative_power(-3, 3));

	//resultado esperado: 1
	printf("%d\n", ft_iterative_power(5, 0));

	//resultado esperado: 1
	printf("%d\n", ft_iterative_power(0, 0));

	//resultado esperado: 0
	printf("%d\n", ft_iterative_power(2, -2));

	return (0);
}*/
