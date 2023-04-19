/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ride-sou <ride-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 08:59:45 by ride-sou          #+#    #+#             */
/*   Updated: 2023/02/20 10:18:35 by ride-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
		return (nb * ft_recursive_power(nb, power - 1));
	return (nb);
}

// int	main(void)
// {
// 	int x;
// 	int pot;
// 	x = 0;
// 	pot = 3;

// 	printf("%d", ft_recursive_power(x, pot));
// 	return (0);
// }