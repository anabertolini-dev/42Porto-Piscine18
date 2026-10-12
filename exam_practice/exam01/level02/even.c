/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   even.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 15:38:05 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/04 15:39:26 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Write a program that displays even numbers, followed by a new line.
*/

#include <unistd.h>

int	main(void)
{
	write(1, "02468\n", 6);
	return (0);
}
