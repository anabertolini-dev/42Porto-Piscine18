/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 18:26:15 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/09/17 18:48:18 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	// resultado esperado: 0
	printf("%d \n", ft_is_prime(-5));

	// resultado esperado: 0
	printf("%d \n", ft_is_prime(0));

	// resultado esperado: 0
	printf("%d \n", ft_is_prime(1));

	// resultado esperado: 1
	printf("%d \n", ft_is_prime(2));

	// resultado esperado: 0
	printf("%d \n", ft_is_prime(4));

	// resultado esperado: 1
	printf("%d \n", ft_is_prime(13));
	return (0);
}
*/
