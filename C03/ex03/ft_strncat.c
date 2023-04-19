/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ride-sou <ride-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:04:39 by ride-sou          #+#    #+#             */
/*   Updated: 2023/02/14 14:21:46 by ride-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>
// #include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest [i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	str1[] = "Porto";
// 	char	str2[] = "Porto";
// 	int	x;
// 	x = 3;

// 	printf("%s", ft_strncat(str1, str2, x));
// 	return(0);
// }