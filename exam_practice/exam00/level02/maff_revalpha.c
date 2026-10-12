/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 12:37:02 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/03 12:40:35 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Write a program that displays the alphabet in reverse order, with
	even-positioned letters in uppercase and odd-positioned letters
	in lowercase, followed by a newline.

	Example:
	$> ./maff_revalpha | cat -e
	zYxWvUtSrQpOnMlKjIhGfEdCbA$
*/

#include <unistd.h>

int	main(void)
{
	char	alphabet;

	alphabet = 'z';
	while (alphabet >= 'a')
	{
		if ((alphabet - 'a') % 2 == 1)
			write(1, &alphabet, 1);
		else
		{
			alphabet = alphabet - 32;
			write(1, &alphabet, 1);
			alphabet = alphabet + 32;
		}
		alphabet--;
	}
	write(1, "\n", 1);
	return (0);
}
