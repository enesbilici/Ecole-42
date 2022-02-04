/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebilici <ebilici@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 18:47:44 by ebilici           #+#    #+#             */
/*   Updated: 2021/12/08 18:49:38 by ebilici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (!(str[c] <= 'z' && str[c] >= 'a'))
			return (0);
			c++;
	}
	return (1);
}
int main()
{
    char str[] = "";

    printf("%d", ft_str_is_lowercase(str));
}

