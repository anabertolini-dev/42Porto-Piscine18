/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 09:47:02 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/05 09:56:30 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Write a function that takes an integer and converts it into a
	null-terminated string.

	The function must return the resulting string, which must be
	dynamically allocated using malloc.

	Your function must be declared as follows:

	char	*ft_itoa(int nbr);
*/

#include <stdlib.h>

int	get_len(long nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
		len++;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

void	fill_number(char *str, long number, int len)
{
	if (number < 0)
	{
		str[0] = '-';
		number = -number;
	}
	if (number == 0)
		str[0] = '0';
	while (number > 0)
	{
		str[len - 1] = (number % 10) + '0';
		number = number / 10;
		len--;
	}
}

char	*ft_itoa(int nbr)
{
	long	number;
	int		len;
	char	*str;

	number = nbr;
	len = get_len(number);
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	fill_number(str, number, len);
	return (str);
}
