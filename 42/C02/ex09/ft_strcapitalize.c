/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthdaa06 <arthus.daa06@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 05:54:41 by arthdaa06         #+#    #+#             */
/*   Updated: 2025/03/19 11:17:45 by arthdaa06        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char str)
{
	if (str < 'A' || str > 'Z')
		return (0);
	return (1);
}

int	ft_str_is_lowecase(char str)
{
	if (str < 'a' || str > 'z')
		return (0);
	return (1);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_str_is_uppercase(str[i]) == 1)
			str[i] += 32;
		i++;
	}
	return (str);
}
