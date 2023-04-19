/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ride-sou <ride-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 11:54:57 by ride-sou          #+#    #+#             */
/*   Updated: 2023/02/18 13:25:39 by ride-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_atoi(char *str)
{
	int	minus_sign;
	int	number;
	int	i;

	minus_sign = 0;
	number = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			minus_sign++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		number = number * 10;
		number = number + str[i] - 48;
		i++;
	}
	if ((minus_sign % 2 == 0))
		return (number);
	return (-number);
}

// int	main(void)
// {
// 	char test[] = "    ---+--+1234548ab567";
// 	printf("%d", ft_atoi(test));
// 	return(0);
// }