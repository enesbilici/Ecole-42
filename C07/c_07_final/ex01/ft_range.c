/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebilici <ebilici@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:20:22 by ebilici           #+#    #+#             */
/*   Updated: 2021/12/16 15:42:44 by ebilici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*p;
	int	index;

	index = 0;
	if (min >= max)
		return (0);
	p = malloc(((max - min) + 1) * sizeof(int));
	if (p == NULL)
		return (0);
	while (min < max)
	{
		p[index] = min;
		index++;
		min++;
	}
	return (p);
}
