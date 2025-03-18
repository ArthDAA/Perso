/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthdaa06 <arthus.daa06@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 18:06:29 by arthdaa06         #+#    #+#             */
/*   Updated: 2025/03/18 13:36:13 by arthdaa06        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(int *arr, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(arr[i] + '0');
		i++;
	}
	if (arr[0] != (10 - n))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_recursive(int *arr, int index, int n, int start)
{
	int	i;

	if (index == n)
	{
		ft_print_number(arr, n);
		return ;
	}
	i = start;
	while (i <= 9)
	{
		arr[index] = i;
		ft_recursive(arr, index + 1, n, i + 1);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	arr[10];

	ft_recursive(arr, 0, n, 0);
}
