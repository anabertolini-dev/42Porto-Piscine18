/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_palindrome.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 09:21:01 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/05 09:24:17 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Write a program that takes a string as an argument and prints the
	string if it is a palindrome, followed by a newline.

	If the string is not a palindrome, print only a newline.

	If the program receives more or fewer than 1 argument, it must
	print only a newline.

	Examples:

	$> ./is_palindrome "aaabb" | cat -e
	$
	$> ./is_palindrome "zaz" | cat -e
	zaz$
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	palindrome;

	i = 0;
	j = 0;
	palindrome = 1;
	if (argc == 2)
	{
		while (argv[1][j] != '\0')
			j++;
		j--;
		while (i < j)
		{
			if (argv[1][i] != argv[1][j])
				palindrome = 0;
			i++;
			j--;
		}
		i = 0;
		if (palindrome == 1)
		{
			while (argv[1][i] != '\0')
			{
				write (1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write (1, "\n", 1);
	return (0);
}
