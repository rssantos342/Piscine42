/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ride-sou <ride-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 11:14:48 by ride-sou          #+#    #+#             */
/*   Updated: 2023/02/06 15:11:29 by ride-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n)

{
	char	x;

	if (n == 1)
	{
		x = '0';
		while (x <= '9')
		{
			write(1, &x, 1);
			write(1, ", ", 2);
			x++;
		}
	}
}

// int	main(void)
// {
// 	ft_print_combn(1);
// 	return(0);
// }