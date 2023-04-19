/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ride-sou <ride-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:30:13 by ride-sou          #+#    #+#             */
/*   Updated: 2023/02/09 15:31:21 by ride-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = 0;
		}
		else
		{
			i++;
		}
	}
}

// int	main(void)

// {
// 	int arr[]= {25, 54, 13, 7, 1};
// 	int size = 5;
// 	printf("1st: %i %i %i %i %i\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
// 	ft_sort_int_tab(arr, size);
// 	printf("2nd: %i %i %i %i %i", arr[0], arr[1], arr[2], arr[3], arr[4]);
// 	return(0);
// }