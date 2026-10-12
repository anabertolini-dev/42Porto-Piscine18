/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interval_spaces.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 19:20:47 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/06 19:26:38 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Create a program that writes three whitespaces between each character in an
	argument, if the number of arguments is different than 2 the program 
	will return a newline.

	$> ./interval_spaces "abc" | cat -e
	a   b   c$
	$> ./interval_spaces "abc a abc" "ok" | cat -e
	$
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i] != '\0')
	{
		write(1, &argv[1][i], 1);
		if (argv[1][i + 1] != '\0')
		{
			write(1, "   ", 3);
		}
		i++;
	}
	write (1, "\n", 1);
}
