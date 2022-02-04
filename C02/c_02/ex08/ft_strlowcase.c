/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebilici <ebilici@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 18:58:41 by ebilici           #+#    #+#             */
/*   Updated: 2021/12/08 18:58:46 by ebilici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strlowcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		
        if ((str[c] <= 'Z') && (str[c] >= 'A'))
			str[c] += 32;
		c++;
	}
	return (str);
}
int main()
{
    char str[] = "SGDFXHCGDasdzcxvgfw2124354y";
    
    printf("%s", ft_strlowcase(str));
}
