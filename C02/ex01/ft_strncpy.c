/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ride-sou <ride-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 17:41:06 by ride-sou          #+#    #+#             */
/*   Updated: 2023/02/16 12:36:16 by ride-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)

{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	int x;
// 	x = 6;

// 	char str_orig[] = "banana";
// 	char str_dest[] = "hg3";

// 	printf("String original antes func: %s\n", str_orig);
// 	printf("String destino antes func: %s\n", str_dest);
// 	ft_strncpy(str_dest, str_orig, x);
// 	printf("String original depois func: %s\n", str_orig);
// 	printf("String destino depois func: %s\n", str_dest);
// 	return(0);
// }