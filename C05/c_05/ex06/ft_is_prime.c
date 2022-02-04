/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebilici <ebilici@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 19:46:15 by ebilici           #+#    #+#             */
/*   Updated: 2021/12/15 04:46:49 by ebilici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	p;

	p = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (p <= nb / p)
	{
		if (nb % p == 0)
			return (0);
		p++;
	}
	return (1);
}

int	main(void)
{
	printf("%d\n", ft_is_prime(417));
}
