/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebilici <ebilici@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 22:18:54 by ebilici           #+#    #+#             */
/*   Updated: 2021/12/07 05:15:42 by ebilici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int *********p_nbr9;
	int ********p_nbr8;
	int *******p_nbr7;
	int ******p_nbr6;
	int *****p_nbr5;
	int ****p_nbr4;
	int ***p_nbr3;
	int **p_nbr2;
	int *p_nbr1;
	int nbr;

	nbr = 61;
	p_nbr1 = &nbr;
	p_nbr2 = &p_nbr1;
	p_nbr3 = &p_nbr2;
	p_nbr4 = &p_nbr3;
	p_nbr5 = &p_nbr4;
	p_nbr6 = &p_nbr5;
	p_nbr7 = &p_nbr6;
	p_nbr8 = &p_nbr7;
	p_nbr9 = &p_nbr8;

	printf("%d\n", nbr);
	ft_ultimate_ft(p_nbr9);
	printf("%d\n", nbr);
	return (0);
}
