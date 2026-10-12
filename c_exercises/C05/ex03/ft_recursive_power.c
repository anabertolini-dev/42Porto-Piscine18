/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 08:09:59 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/09/16 08:11:09 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	result = nb * ft_recursive_power(nb, power - 1);
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	//resultado esperado: 16
	printf("%d\n", ft_recursive_power(2, 4));

	//resultado esperado: -27
	printf("%d\n", ft_recursive_power(-3, 3));

	//resultado esperado: 1
	printf("%d\n", ft_recursive_power(5, 0));

	//resultado esperado: 1
	printf("%d\n", ft_recursive_power(0, 0));

	//resultado esperado: 0
	printf("%d\n", ft_recursive_power(2, -2));

	return (0);
}*/
