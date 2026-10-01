/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 14:59:11 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/09/08 15:02:59 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_div;
	int	temp_mod;

	temp_div = *a / *b;
	temp_mod = *a % *b;
	*a = temp_div;
	*b = temp_mod;
}
/*
#include <stdio.h>
int	main(void)
{
	int	num1;
	int	num2;

	num1 = 10;
	num2 = 2;
	ft_ultimate_div_mod(&num1, &num2);
	printf("div=%d,mod=%d\n", num1, num2);
	return (0);
}
*/
