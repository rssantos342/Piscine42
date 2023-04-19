/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ride-sou <ride-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:06:01 by ride-sou          #+#    #+#             */
/*   Updated: 2023/02/11 17:43:54 by ride-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

char	*ft_strcpy(char *dest, char *src)

{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char str_orig[] = "Porto";
// 	char str_dest[] = "Sporting";

// 	printf("String original antes func: %s\n", str_orig);
// 	printf("String destino antes func: %s\n", str_dest);
// 	ft_strcpy(str_dest, str_orig);
// 	printf("String original depois func: %s\n", str_orig);
// 	printf("String destino depois func: %s\n", str_dest);
// 	return(0);
// }