/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 08:12:31 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/09/16 08:24:21 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_fibonacci(int index)
{
	int	result;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	result = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	//resultado esperado: 3
	printf("%d\n", ft_fibonacci(4));

	//resultado esperado: 21
	printf("%d\n", ft_fibonacci(8));

	//resultado esperado: 1
	printf("%d\n", ft_fibonacci(2));

	//resultado esperado: 0
	printf("%d\n", ft_fibonacci(0));

	//resultado esperado: -1
	printf("%d\n", ft_fibonacci(-2));
	return (0);
}
*/
