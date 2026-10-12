/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 13:04:01 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/03 13:05:39 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Create a function that divides the value pointed to by a pointer
	by an integer.

	The parameters are an integer and a pointer to an integer.

	The function must be declared as follows:

	void	ft_div(int a, int *ptr);
*/

void	ft_div(int a, int *ptr)
{
	*ptr = *ptr / a;
}
