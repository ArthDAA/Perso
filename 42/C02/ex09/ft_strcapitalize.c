/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthdaa06 <arthus.daa06@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 05:54:41 by arthdaa06         #+#    #+#             */
/*   Updated: 2025/03/20 15:08:12 by arthdaa06        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alphanum(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

void	ft_strlowcase(char *c)
{
	if (*c >= 'A' && *c <= 'Z')
		*c += 32;
}

void	ft_strupcase(char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	while (str[i] != '\0')
	{
		if (ft_str_is_alphanum(str[i]))
		{
			if (new_word)
				ft_strupcase(&str[i]);
			else
				ft_strlowcase(&str[i]);
			new_word = 0;
		}
		else
			new_word = 1;
		i++;
	}
	return (str);
}
