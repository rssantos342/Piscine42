/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ride-sou <ride-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:42:09 by ride-sou          #+#    #+#             */
/*   Updated: 2023/02/09 13:10:42 by ride-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_a;

	temp_a = *a;
	*a = *a / *b;
	*b = temp_a % *b;
}

// int	main(void)
// {
// 	int a;
// 	int b;

// 	a = 20;
// 	b = 10;
// 	ft_ultimate_div_mod(&a,&b);
// 	printf("%d %d", a, b);
// 	return(0);
// }
