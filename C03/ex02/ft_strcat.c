/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ride-sou <ride-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 09:56:36 by ride-sou          #+#    #+#             */
/*   Updated: 2023/02/15 08:36:05 by ride-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>
// #include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
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

// 	printf("%s", ft_strcat(str1, str2));
// 	// printf("%s", strcat(str1, str2));
// 	return(0);
// }