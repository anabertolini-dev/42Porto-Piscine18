/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 18:49:30 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/09/17 19:07:08 by ana-cmar         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (!ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
	// resultado esperado: 2 (0 não é primo, o próximo é 2)
	printf("%d \n", ft_find_next_prime(0));

	// resultado esperado: 2 (1 não é primo, o próximo é 2)
	printf("%d \n", ft_find_next_prime(1));

	// resultado esperado: 2 (2 já é primo, devolve ele mesmo)
	printf("%d \n", ft_find_next_prime(2));

	// resultado esperado: 5 (4 não é primo, o próximo é 5)
	printf("%d \n", ft_find_next_prime(4));

	// resultado esperado: 13 (13 já é primo, devolve ele mesmo)
	printf("%d \n", ft_find_next_prime(13));

	// resultado esperado: 17 (14, 15 e 16 não são primos, o próximo é 17)
	printf("%d \n", ft_find_next_prime(14));

	return (0);
}
*/
