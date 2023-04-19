/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ride-sou <ride-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 11:13:17 by ride-sou          #+#    #+#             */
/*   Updated: 2023/02/09 13:08:11 by ride-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

void	ft_swap(int *a, int *b)

{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

// int	main(void)
// {
// 	int x;
// 	int y;

// 	x = 5;
// 	y = 10;
// 	printf("BEFORE: x=%d y=%d", x, y);
// 	ft_swap(&x, &y);
// 	printf(" AFTER: x=%d y=%d", x, y);
// 	return(0);
// }