/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 14:14:11 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/09/21 14:55:16 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	len;

	j = 0;
	len = 0;
	while (j < size)
	{
		i = 0;
		while (strs[j][i++] != '\0')
			len++;
		j++;
	}
	if (size > 1)
		len += ft_strlen(sep) * (size - 1);
	return (len);
}

int	ft_copy(char *dest, char *src, int k)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[k] = src[i];
		i++;
		k++;
	}
	return (k);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		j;
	int		k;

	if (size == 0)
	{
		result = malloc(1);
		if (result)
			result[0] = '\0';
		return (result);
	}
	result = malloc(ft_total_len(size, strs, sep) + 1);
	if (result == 0)
		return (0);
	j = 0;
	k = 0;
	while (j < size)
	{
		k = ft_copy(result, strs[j], k);
		if (j < size - 1)
			k = ft_copy(result, sep, k);
		j++;
	}
	result[k] = '\0';
	return (result);
}
/*#include <stdio.h>

int	main(void)
{
	char	*strs[3];
	char	*result;

	strs[0] = "42";
	strs[1] = "Porto";
	strs[2] = "Portugal";
	result = ft_strjoin(3, strs, " * ");
	printf("%s\n", result);
	free(result);
	return (0);
}*/
