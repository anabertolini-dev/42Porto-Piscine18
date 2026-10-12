/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sub.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 15:35:48 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/04 15:36:24 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Create a function that subtracts an integer from the value pointed
	to by a pointer.

	The parameters are an integer and a pointer to an integer.

	The function must be declared as follows:

	void	ft_subtract(int a, int *ptr);
*/

void	ft_subtract(int a, int *ptr)
{
	*ptr = *ptr - a;
}
