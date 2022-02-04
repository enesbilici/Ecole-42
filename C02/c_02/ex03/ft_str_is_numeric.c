/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebilici <ebilici@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 18:48:08 by ebilici           #+#    #+#             */
/*   Updated: 2021/12/08 18:48:12 by ebilici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] < '0' || str[c] > '9')
			return (0);
		c++;
	}
	return (1);
}
int main()
{
    char str[] = "";
    
    printf("%d", ft_str_is_numeric(str));
}
