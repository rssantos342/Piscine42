/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ride-sou <ride-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 12:32:25 by ride-sou          #+#    #+#             */
/*   Updated: 2023/02/19 17:05:15 by ride-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb - 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	if (nb > 1)
	{
		while (i >= 1)
		{
			nb = nb * i;
			i--;
		}
		return (nb);
	}
	return (0);
}

// int	main(void)
// {
// 	int x;
// 	x = 12;

// 	printf("%d", ft_iterative_factorial(x));
// 	return(0);
// }