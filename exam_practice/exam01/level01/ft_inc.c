/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 15:32:08 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/04 15:33:24 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Write a function that takes a pointer to an integer and
	increments the value it points to.

	The function must be declared as follows:

	void	*ft_inc(int *a);
*/

void	*ft_inc(int *a)
{
	*a = *a + 1;
	return (a);
}
