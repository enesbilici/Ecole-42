/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebilici <ebilici@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 05:36:25 by ebilici           #+#    #+#             */
/*   Updated: 2021/12/07 05:56:04 by ebilici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}

int	main(void)
{
	int a = 61;
	int b = 42;

	printf("a'nın değişmemiş hali : %u\n", a);
	printf("b'nin değişmemiş hali : %u\n", b);
	ft_swap(&a, &b);
	printf("a'nın yeni hali : %u\n", a);
	printf("b'nin yeni hali : %u\n", b);
}
