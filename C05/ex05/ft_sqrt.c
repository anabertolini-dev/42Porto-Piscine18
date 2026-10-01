/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 08:28:44 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/09/16 08:35:52 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (nb);
	while (i * i <= nb)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	//resultado esperado: 2
	printf("%d \n", ft_sqrt(4));

	//resultado esperado: 0
	printf("%d \n", ft_sqrt(15));

	//resultado esperado: 0
	printf("%d \n", ft_sqrt(-9));

	return (0);
}
*/
