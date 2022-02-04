/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebilici <ebilici@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 08:38:59 by ebilici           #+#    #+#             */
/*   Updated: 2021/12/07 09:43:14 by ebilici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if(b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

int	main(void)
{
	int x;
	int y;
	int a = 14;
	int	b = 6;
	int *div = &x;
	int *mod = &y;	
	
	ft_div_mod(a, b, div, mod);

	printf("div : %d", *div);
	printf("mod : %d", *mod);
	printf("a : %d", a);
	printf("b : %d", b);
}
