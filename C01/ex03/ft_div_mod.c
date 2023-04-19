/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ride-sou <ride-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:19:43 by ride-sou          #+#    #+#             */
/*   Updated: 2023/02/09 13:09:19 by ride-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int a;
// 	int b;
// 	int div;
// 	int mod;

// 	a = 20;
// 	b = 10;
// 	ft_div_mod(a, b, &div,&mod);
// 	printf("%d %d", div, mod);
// 	return(0);
// }