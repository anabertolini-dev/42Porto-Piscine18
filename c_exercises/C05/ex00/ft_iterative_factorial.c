/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 14:45:21 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/09/15 14:55:33 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb == 0)
	{
		return (1);
	}
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	//resultado esperado: 120
	printf("%d\n", ft_iterative_factorial(5));

	//resultado esperado: 1
	printf("%d\n", ft_iterative_factorial(0));

	//resultado esperado: 0
	printf("%d\n", ft_iterative_factorial(-5));

	//resultado esperado: 0
	printf("%d\n", ft_iterative_factorial(-2147483648));

	return (0);
}*/
