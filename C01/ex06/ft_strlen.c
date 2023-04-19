/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ride-sou <ride-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 09:36:30 by ride-sou          #+#    #+#             */
/*   Updated: 2023/02/09 13:13:12 by ride-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

// int	main(void)
// {
// 	char* escola;

// 	escola = "42";

// 	ft_strlen(escola);
// 	printf("The number of characters in my string is: %d", ft_strlen(escola));
// 	return(0);
// }