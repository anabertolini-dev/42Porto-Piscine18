/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 15:25:21 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/04 15:26:58 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Create a function that adds an integer to the value pointed to
	by a pointer.

	The parameters are an integer and a pointer to an integer.

	The function must be declared as follows:

	void	ft_add(int a, int *ptr);
*/

void	ft_add(int a, int *ptr)
{
	*ptr = *ptr + a;
}
