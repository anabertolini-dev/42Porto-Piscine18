/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   even.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 08:10:14 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/05 08:11:36 by ana-cmar         ###   ########.fr       */
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
