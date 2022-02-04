/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebilici <ebilici@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 09:44:36 by ebilici           #+#    #+#             */
/*   Updated: 2021/12/07 11:50:26 by ebilici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;

	if(*b != 0)
	{
		div = (*a) / (*b);
		mod = (*a) % (*b);
		*a = div;
		*b = mod;
	}
}

int	main(void)
{
	int x = 17;
	int y = 4;
	int *a = &x;
	int *b = &y;

	printf("eski a : %d\n", *a);
	printf("eski b : %d\n", *b);

	ft_ultimate_div_mod(a, b);

	printf("yeni a : %d\n", *a);
	printf("yeni b : %d\n", *b);
}
