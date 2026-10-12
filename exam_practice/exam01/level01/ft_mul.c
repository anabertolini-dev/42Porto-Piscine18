/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mul.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 15:33:59 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/04 15:35:07 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Create a function that multiplies the value pointed to by a pointer
	by an integer.

	The parameters are an integer and a pointer to an integer.

	The function must be declared as follows:

	void	ft_mul(int a, int *ptr);
*/

void	ft_mul(int a, int *ptr)
{
	*ptr = *ptr * a;
}
