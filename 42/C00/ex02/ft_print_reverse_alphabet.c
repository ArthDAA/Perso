/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthdaa06 <arthus.daa06@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 18:04:45 by arthdaa06         #+#    #+#             */
/*   Updated: 2025/03/15 18:04:46 by arthdaa06        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}
void ft_print_reverse_alphabet(void)
{
    int i;
    i = 'z';
    while (i >= 'a')
    {
        ft_putchar(i);
        i--;
    }
}

/* int main()
{
    ft_print_alphabet();
} */
