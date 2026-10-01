/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 14:50:30 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/09/08 14:59:47 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int	main(void)
{
	int	result;
	int	rest;

	ft_div_mod (10, 2, &result, &rest);
	printf ("resultado=%d,resto=%d\n", result, rest);
	return (0);
}
*/
