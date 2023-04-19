/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ride-sou <ride-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 13:00:28 by ride-sou          #+#    #+#             */
/*   Updated: 2023/02/13 11:22:31 by ride-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

char	*ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_str_is_firstuppercase(char *str)
{
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	ft_str_is_lowercase(str);
	ft_str_is_firstuppercase(str);
	while (str[i] != '\0')
	{
		if (str[i - 1] >= '0' && str[i - 1] <= '9')
			i++;
		else if (str[i - 1] >= 'a' && str[i - 1] <= 'z')
			i++;
		else if (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
			i++;
		else
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
				i++;
			}
			i++;
		}
	}
	return (str);
}

// int	main(void)
// {
// 	char teste[] = "salut, comment tu vas ? 42mots quarante-deux";

// 	ft_strcapitalize(teste);
// 	printf("%s", teste);
// 	return(0);
// }