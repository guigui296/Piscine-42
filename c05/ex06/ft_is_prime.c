/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbehra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 14:41:18 by gbehra            #+#    #+#             */
/*   Updated: 2024/08/05 11:53:21 by gbehra           ###   ########.fr       */
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

/*#include <stdio.h>

int	main(void)
{
	int	b = 1;
	int	c = 2;
	int	d = 3;
	int	e = 4;
	int	f = 5;
	int	g = 6;
	int	h = 7;
	int	i = 8;
	int	j = 9;
	int	k = 10;
	int	l = 11;
	int	m = 12;
	int	n = 13;
	int	o = 46;
	int	p = 59;
	int	q = -1;
	int	r = 2147483647;

	printf("Si il est premier = 1, sinon 0 : %d = %d\n", b, ft_is_prime(b));
	printf("Si il est premier = 1, sinon 0 : %d = %d\n", c, ft_is_prime(c));
	printf("Si il est premier = 1, sinon 0 : %d = %d\n", d, ft_is_prime(d));
	printf("Si il est premier = 1, sinon 0 : %d = %d\n", e, ft_is_prime(e));
	printf("Si il est premier = 1, sinon 0 : %d = %d\n", f, ft_is_prime(f));
	printf("Si il est premier = 1, sinon 0 : %d = %d\n", g, ft_is_prime(g));
	printf("Si il est premier = 1, sinon 0 : %d = %d\n", h, ft_is_prime(f));
	printf("Si il est premier = 1, sinon 0 : %d = %d\n", i, ft_is_prime(i));
	printf("Si il est premier = 1, sinon 0 : %d = %d\n", j, ft_is_prime(j));
	printf("Si il est premier = 1, sinon 0 : %d = %d\n", k, ft_is_prime(k));
	printf("Si il est premier = 1, sinon 0 : %d = %d\n", l, ft_is_prime(l));
	printf("Si il est premier = 1, sinon 0 : %d = %d\n", m, ft_is_prime(m));
	printf("Si il est premier = 1, sinon 0 : %d = %d\n", n, ft_is_prime(n));
	printf("Si il est premier = 1, sinon 0 : %d = %d\n", o, ft_is_prime(o));
	printf("Si il est premier = 1, sinon 0 : %d = %d\n", p, ft_is_prime(p));
	printf("Si il est premier = 1, sinon 0 : %d = %d\n", q, ft_is_prime(q));
	printf("Si il est premier = 1, sinon 0 : %d = %d\n", r, ft_is_prime(r));

	return (0);
}*/
