/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_even.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 12:46:41 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/03 12:48:09 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Create a program that prints only the characters whose indices are
	multiples of 2.

	Example:

	$> ./a.out "FOR 42" | cat -e
	FR4$
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
			if (i % 2 == 0)
			{
				write (1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
