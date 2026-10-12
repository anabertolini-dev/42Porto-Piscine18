/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 09:01:43 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/09/06 09:37:24 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_firstline(int count_x, int x)
{
	ft_putchar('/');
	if (x > 1)
	{
		while (count_x < x)
		{
			ft_putchar('*');
			count_x++;
		}
		ft_putchar('\\');
	}
	ft_putchar('\n');
}

void	ft_middlelines(int count_x, int x)
{
	count_x = 2;
	ft_putchar('*');
	if (x > 1)
	{
		while (count_x < x)
		{
			ft_putchar(' ');
			count_x++;
		}
		ft_putchar('*');
	}
	ft_putchar('\n');
}

void	ft_lastline(int count_x, int x)
{
	ft_putchar('\\');
	if (x > 1)
	{
		while (count_x < x)
		{
			ft_putchar('*');
			count_x++;
		}
		ft_putchar('/');
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
			if (count_y == 2)
				ft_firstline(count_x, x);
			if (y == 2 && count_y != y)
				ft_firstline(count_x, x);
			if (y > 2 && count_y != y)
				ft_middlelines(count_x, x);
			if (y >= 2 && count_y == y)
				ft_lastline(count_x, x);
			count_y++;
		}
		if (y == 1)
			ft_firstline(count_x, x);
	}
}
