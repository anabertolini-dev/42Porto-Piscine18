/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_interval.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 16:34:23 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/04 16:37:45 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Create a program that replaces each character in the argument with '5'
	when its index is a multiple of 3.

	Replace each character with '3' when its index is a multiple of 5, and
	with '5' when its index is a multiple of both 3 and 5.

	If the number of arguments is not 1, print a newline.
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (i % 3 == 0 && i % 5 == 0)
				argv[1][i] = '5';
			else if (i % 3 == 0)
				argv[1][i] = '5';
			else if (i % 5 == 0)
				argv[1][i] = '3';
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
