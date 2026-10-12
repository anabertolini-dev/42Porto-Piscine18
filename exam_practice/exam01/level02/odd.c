/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   odd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 15:54:02 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/04 15:55:10 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Write a program that displays odd numbers, followed by a new line.
*/

#include <unistd.h>

int	main(void)
{
	write(1, "13579\n", 6);
	return (0);
}
