/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ride-sou <ride-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 17:26:11 by ride-sou          #+#    #+#             */
/*   Updated: 2023/02/20 08:59:11 by ride-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		nb = nb * i;
		power--;
	}
	return (nb);
}

// int	main(void)
// {
// 	int x;
// 	int pot;
// 	x = 2;
// 	pot = 3;

// 	printf("%d", ft_iterative_power(x, pot));
// 	return (0);
// }