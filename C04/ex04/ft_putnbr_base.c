/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 20:22:09 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/09/14 10:57:54 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	check_base(char *base)
{
	int	len;
	int	j;

	len = 0;
	while (base[len] != '\0')
	{
		j = len + 1;
		if (base[len] == '-' || base[len] == '+')
			return (0);
		while (base[j] != '\0')
		{
			if (base[len] == base[j])
				return (0);
			j++;
		}
		len++;
	}
	if (len == 1 || len == 0)
		return (0);
	return (len);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	long	n;

	len = check_base(base);
	if (len == 0)
		return ;
	n = nbr;
	if (nbr < 0)
	{
		n = n * (-1);
		write(1, "-", 1);
	}
	if (n >= len)
		ft_putnbr_base(n / len, base);
	write(1, &base[n % len], 1);
}
/*
int	main(void)
{
	//base decimal, resultado esperado: 42
	ft_putnbr_base(42, "0123456789");
	write(1, "\n", 1);

	//base binaria, resultado esperado: 101010
	ft_putnbr_base(42, "01");
	write(1, "\n", 1);
	
	//base hexadecimal, resultado esperado: 2A
	ft_putnbr_base(42, "0123456789ABCDEF");
	write(1, "\n", 1);
	
	//base octal, resultado esperado: -vn
	ft_putnbr_base(-42, "poneyvif");
	write(1, "\n", 1);
	
	//teste de erro, contem sinal invalido na base entao nao deve mostrar nada
	ft_putnbr_base(42, "01234+6789");
	write(1, "\n", 1);

	return (0);
}
*/
