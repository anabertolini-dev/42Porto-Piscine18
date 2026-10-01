/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 07:52:06 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/09/16 08:00:17 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_factorial(int nb)
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
	result = nb * ft_recursive_factorial(nb - 1);
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	//resultado esperado: 120
	printf("%d\n", ft_recursive_factorial(5));

	//resultado esperado: 1
	printf("%d\n", ft_recursive_factorial(0));

	//resultado esperado: 0
	printf("%d\n", ft_recursive_factorial(-5));

	//resultado esperado: 0
	printf("%d\n", ft_recursive_factorial(-2147483648));

	return (0);
}*/
