/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebilici <ebilici@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 15:07:44 by ebilici           #+#    #+#             */
/*   Updated: 2021/12/11 03:57:51 by ebilici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] < 65 || (str[i] > 90 && str[i] < 97) || 122 < str[i])
				return (0);
		i++;
	}
	return (1);
}

int main()
{
    char str[] = "fusd_rkan";

    printf("%d", ft_str_is_alpha(str));
}
