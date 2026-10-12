/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 10:24:58 by gprada-d          #+#    #+#             */
/*   Updated: 2026/09/05 17:50:57 by gprada-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_firstline(int count_x, int x)
{
	ft_putchar('A');
	if (x > 1)
	{
		while (count_x < x)
		{
			ft_putchar('B');
			count_x++;
		}
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	ft_middlelines(int count_x, int x)
{
	count_x = 2;
	ft_putchar('B');
	if (x > 1)
	{
		while (count_x < x)
		{
			ft_putchar(' ');
			count_x++;
		}
		ft_putchar('B');
	}
	ft_putchar('\n');
}

void	ft_lastline(int count_x, int x)
{
	ft_putchar('C');
	if (x > 1)
	{
		while (count_x < x)
		{
			ft_putchar('B');
			count_x++;
		}
		ft_putchar('A');
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
