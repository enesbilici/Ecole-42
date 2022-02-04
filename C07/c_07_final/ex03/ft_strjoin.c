/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebilici <ebilici@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:22:51 by ebilici           #+#    #+#             */
/*   Updated: 2021/12/16 15:38:35 by ebilici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	i = 0;
	k = 0;
	str = malloc(sizeof(strs));
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			str[k++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] && i != size - 1)
		{	
			str[k++] = sep[j++];
		}	
		i++;
	}
	str[k] = '\0';
	return (str);
}
