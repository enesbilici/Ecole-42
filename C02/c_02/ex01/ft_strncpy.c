/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebilici <ebilici@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 14:48:46 by ebilici           #+#    #+#             */
/*   Updated: 2021/12/11 03:50:31 by ebilici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while(src[index] != '\0' && index < n)
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}

int main()
{
    char dest[] = "Selam Ecole 42";
    char src[] = "Hello World!";
    unsigned int n;

    n = 5;
    printf("%s \n", ft_strncpy(dest, src, n));
}

