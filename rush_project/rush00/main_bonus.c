/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 10:25:58 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/09/05 16:55:42 by gprada-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	rush(int x, int y);

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	if (argc != 3)
	{
		write(1, "Invalid values, please write ./file_name x y\n", 46);
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	if (x <= 0 || y <= 0)
	{
		write(1, "Invalid values, values should be positive\n", 43);
		return (1);
	}
	rush(x, y);
	return (0);
}
