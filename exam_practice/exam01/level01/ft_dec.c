/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dec.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 15:28:09 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/04 15:29:46 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Write a function that takes a pointer to an integer and
	decrements the value it points to.

	The function must be declared as follows:

	void	*ft_dec(int *a);
*/

void	*ft_dec(int *a)
{
	*a = *a - 1;
	return (a);
}
