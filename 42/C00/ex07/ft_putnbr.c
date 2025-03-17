/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthdaa06 <arthus.daa06@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 18:06:19 by arthdaa06         #+#    #+#             */
/*   Updated: 2025/03/15 18:06:20 by arthdaa06        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
        write(1, &c, 1);
}
void    ft_putnbr(int nb)
{
        if (nb == -2147483648)
        {
                write(1, "-2147483648", 11);
                return;
        }
        if (nb < 0)
        {
                ft_putchar('-');
                nb = -nb;
        }
        if (nb >= 10)
                ft_putnbr(nb / 10);
        ft_putchar('0' + (nb % 10));
}

//int main()
//{
//        ft_putnbr(123);
//}

