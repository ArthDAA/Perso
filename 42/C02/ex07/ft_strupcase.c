/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthdaa06 <arthus.daa06@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 12:14:11 by arthdaa06         #+#    #+#             */
/*   Updated: 2025/03/17 12:17:23 by arthdaa06        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char str)
{
	if(str < 'a' || str > 'z')
		return (0);
	return (1);
}

int main()
{
	printf("%d\n", ft_str_is_lowercase(i));	
