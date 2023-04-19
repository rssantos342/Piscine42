/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ride-sou <ride-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 10:27:38 by ride-sou          #+#    #+#             */
/*   Updated: 2023/02/05 10:39:56 by ride-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)

{
	char	x;
	char	y;

	x = 'N';
	y = 'P';
	if (n < 0)
		write (1, &x, 1);
	else
		write (1, &y, 1);
}

// int	main(void)

// {
// 	ft_is_negative(3);
// 	return (0);
// }