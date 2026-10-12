/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   odd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 19:28:47 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/06 19:29:59 by ana-cmar         ###   ########.fr       */
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
