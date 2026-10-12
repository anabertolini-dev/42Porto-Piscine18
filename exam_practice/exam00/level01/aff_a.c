/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 12:24:34 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/03 12:26:28 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Write a program that takes a string, and displays the first 'a' character it
	encounters in it, followed by a newline.
	
	If there are no 'a' characters in the string, the program just writes 'a' 
	followed by a newline. If the number of parameters is not 1, the program 
	displays 'a' followed by a newline.
*/

#include <unistd.h>

int	main(void)
{
	write (1, "a\n", 2);
	return (0);
}
