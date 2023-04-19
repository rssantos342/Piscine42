/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ride-sou <ride-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:34:52 by ride-sou          #+#    #+#             */
/*   Updated: 2023/02/09 12:54:44 by ride-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	size = size - 1;
	while (i < size)
	{
		tmp = tab[i];
		tab[i] = tab[size];
		tab[size] = tmp;
		i++;
		size--;
	}
}

// int	main(void)

// {
// 	int arr[4]= {10, 20, 30, 40};
// 	int size = 4;
// 	printf("Original: %i %i %i %i\n", arr[0], arr[1], arr[2], arr[3]);
// 	ft_rev_int_tab(arr, size);
// 	printf("Reverse: %i %i %i %i", arr[0], arr[1], arr[2], arr[3]);
// 	return(0);
// }