/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ride-sou <ride-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 09:21:26 by ride-sou          #+#    #+#             */
/*   Updated: 2023/02/13 12:24:18 by ride-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

unsigned int	ft_strlcopy(char *dest, char *src, unsigned int size)

{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	if (size < 1)
		return (len);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

// int	main(void)
// {
// 	unsigned int x;
// 	x = 5;

// 	char str_orig[] = "Gooddeve";
// 	char str_dest[] = "HelloHello";

// 	printf("String original antes func: %s %u\n", str_orig, x);
// 	printf("String destino antes func: %s %u\n", str_dest, x);
// 	ft_strlcopy(str_dest, str_orig, x);
// 	printf("String original depois func: %s %u\n", str_orig, x);
// 	printf("String destino depois func: %s %u\n", str_dest, x);
// 	return(0);
// }