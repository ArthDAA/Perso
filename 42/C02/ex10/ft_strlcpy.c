/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthdaa06 <arthus.daa06@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 04:47:01 by arthdaa06         #+#    #+#             */
/*   Updated: 2025/03/21 06:19:33 by arthdaa06        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*I'm SO SORRY for this terrible indentation. Fkng Norminette bug.*/
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	if (size > 0)
	{
		while (j < size - 1 && src[j])
		{
			dest[j] = src[j];
			j++;
		}
		dest[j] = '\0';
		}
			return (i);
	}
