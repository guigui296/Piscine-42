/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbehra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 10:01:58 by gbehra            #+#    #+#             */
/*   Updated: 2024/08/05 10:45:48 by gbehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (ft_is_prime(nb) == 0)
	{
		nb++;
	}
	return (nb);
}

/*#include <stdio.h>

int	main(void)
{
	int	a = 1;
	int	b = 2;
	int	c = 3;
	int	d = 4;
	int	e = 62;

	printf("Le prochain nombre premier de : %d = %d\n", a, ft_find_next_prime(a));
	printf("Le prochain nombre premier de : %d = %d\n", b, ft_find_next_prime(b));
	printf("Le prochain nombre premier de : %d = %d\n", c, ft_find_next_prime(c));
	printf("Le prochain nombre premier de : %d = %d\n", d, ft_find_next_prime(d));
	printf("Le prochain nombre premier de : %d = %d\n", e, ft_find_next_prime(e));
}*/
