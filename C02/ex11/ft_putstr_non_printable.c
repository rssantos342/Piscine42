/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ride-sou <ride-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:25:06 by ride-sou          #+#    #+#             */
/*   Updated: 2023/02/13 18:31:18 by ride-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	imprimir_non_printable(char *str, int i)
{
	char	*hex;
	int		dec;

	hex = "0123456789abcdef";
	dec = str[i];
	write(1, "\\", 1);
	if (str[i] >= 0 && str[i] <= 15)
	{
		write(1, "0", 1);
		write(1, &hex[dec], 1);
	}
	else if (str[i] >= 16 && str[i] <= 31)
	{
		write(1, "1", 1);
		write(1, &hex[dec - 16], 1);
	}
	else
		write (1, "7f", 2);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 0 && str[i] <= 31) || str[i] == 127)
		{
			imprimir_non_printable(str, i);
			i++;
		}
		else
		{
			write(1, &str[i], 1);
			i++;
		}
	}
}

// int	main(void)

// {
// 	char teste[] = "Coucou\ntu vas bien ?";

// 	ft_putstr_non_printable(teste);
// 	return(0);
// }