/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebilici <ebilici@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 06:27:17 by ebilici           #+#    #+#             */
/*   Updated: 2021/12/15 22:24:14 by ebilici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	write_params(char **str)
{
	int	i;
	int	j;

	i = 1;
	while (str[i] != NULL)
	{
		j = 0;
		while (str[i][j] != '\0')
		{
			write(1, &str[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	int		i;
	int		j;
	char	*a;

	if (ac >= 2)
	{
		i = 1;
		while (av[i] != NULL)
		{
			j = i + 1;
			while (av[j] != NULL)
			{
				if (ft_strcmp(av[i], av[j]) > 0)
				{
					a = av[i];
					av[i] = av[j];
					av[j] = a;
				}
				j++;
			}
			i++;
		}
		write_params(av);
	}
	return (0);
}
