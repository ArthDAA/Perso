/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthdaa06 <arthus.daa06@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 18:04:36 by arthdaa06         #+#    #+#             */
/*   Updated: 2025/03/15 18:04:37 by arthdaa06        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}
void ft_print_alphabet(void)
{
    int i;
    i = 'a';
    while (i <= 'z')
    {
        ft_putchar(i);
        i++;
    }
}

/* int main()
{
    ft_print_alphabet();
} */
