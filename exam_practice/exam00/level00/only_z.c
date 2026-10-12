/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   only_z.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 12:21:53 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/03 12:23:49 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Write a program that displays the character 'z' on standard output.
*/

#include <unistd.h>

int	main(void)
{
	write(1, "z", 1);
	return (0);
}
