/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebilici <ebilici@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:25:15 by ebilici           #+#    #+#             */
/*   Updated: 2021/12/08 09:42:43 by ebilici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int k_b = 0;
	while(k_b < size)
	{
		printf("%d,", tab[k_b]);
		k_b++;
	}


	int	i;
	int tmp;

	i = 0;
    while (i < (size / 2))
	{
		tmp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tmp;
		i++;
	}

	printf("\n");

	int	k_a = 0;
	while(k_a < size)
	{
		printf("%d,", tab[k_a]);
		k_a++;
	}

	
}

int	main(void)
{
	int	a[] = {3, 5, 7, 2, 8, 1, 12, 15, 4, 7, -2};
	ft_rev_int_tab(a, 11);
}
