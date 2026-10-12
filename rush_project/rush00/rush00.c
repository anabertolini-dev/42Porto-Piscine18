/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 10:24:58 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/09/05 17:08:57 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_firstandlastline(int count_x, int x)
{
	ft_putchar('o');
	if (x > 1)
	{
		while (count_x < x)
		{
			ft_putchar('-');
			count_x++;
		}
		ft_putchar('o');
	}
	ft_putchar('\n');
}

void	ft_middlelines(int count_x, int x)
{
	count_x = 2;
	ft_putchar('|');
	if (x > 1)
	{
		while (count_x < x)
		{
			ft_putchar(' ');
			count_x++;
		}
		ft_putchar('|');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	count_y;
	int	count_x;

	count_y = 2;
	count_x = 2;
	if (x <= 0 || y <= 0)
		write(1, "Invalid values, both of them should be positive\n", 53);
	else
	{
		while (count_y <= y)
		{
			if (count_y == 2 || count_y == y)
				ft_firstandlastline(count_x, x);
			if (y == 2)
				ft_firstandlastline(count_x, x);
			if (y > 2 && count_y != y)
				ft_middlelines(count_x, x);
			count_y++;
		}
		if (y == 1)
			ft_firstandlastline(count_x, x);
	}
}
