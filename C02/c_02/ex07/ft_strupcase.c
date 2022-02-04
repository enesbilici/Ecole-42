/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebilici <ebilici@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 18:57:18 by ebilici           #+#    #+#             */
/*   Updated: 2021/12/11 04:20:47 by ebilici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<stdio.h>
char	*ft_strupcase(char *str)
{
	int	c;


	c = 0;
	while (str[c] != '\0')
	{

        if(str[c] >= 'a' && str[c] <= 'z')
        {
            str[c] -= 32;
        }
        c++;
    }
    return (str);
}
int main()
{
    char str[] = "asdfgwr12eDFASGDGNF";
    printf("%s", ft_strupcase(str));
}

