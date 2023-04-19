/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ride-sou <ride-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 10:53:12 by ride-sou          #+#    #+#             */
/*   Updated: 2023/02/06 09:41:25 by ride-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	imprimir(char x, char y, char z)

{
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, &z, 1);
	if (x != '7')
		write(1, ", ", 2);
	else
		write(1, "\n", 1);
}

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = '0';
	while (x <= '7')
	{	
		y = x + 1;
		while (y <= '8')
		{	
			z = y + 1;
			while (z <= '9')
			{
				imprimir(x, y, z);
				z++;
			}
			y++;
		}
		x++;
	}
}

// int	main(void)

// {
// 	ft_print_comb();
// 	return(0);
// }
