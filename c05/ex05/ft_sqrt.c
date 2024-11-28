/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbehra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 12:34:51 by gbehra            #+#    #+#             */
/*   Updated: 2024/08/05 11:54:23 by gbehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	res;

	res = 0;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (res <= nb / 2)
	{
		if (res * res == nb)
			return (res);
		res++;
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	int	g = 0;
	int	h = 1;
	int	i = 4;
	int	j = 9;
	int	k = 16;
	int	l = 25;
	int	m = 36;
	int	n = 49;
	int	o = 64;
	int	p = 81;
	int	q = 100;
	int	r = 121;
	int	s = 144;
	int	t = 169;
	int	u = -1;
	int	v = 2;
	int	w = 15;
	int	x = 2147483647;

	printf("racine de %d = %d\n", g, ft_sqrt(g));
	printf("racine de %d = %d\n", h, ft_sqrt(h));
	printf("racine de %d = %d\n", i, ft_sqrt(i));
	printf("racine de %d = %d\n", j, ft_sqrt(j));
	printf("racine de %d = %d\n", k, ft_sqrt(k));
	printf("racine de %d = %d\n", l, ft_sqrt(l));
	printf("racine de %d = %d\n", m, ft_sqrt(m));
	printf("racine de %d = %d\n", n, ft_sqrt(n));
	printf("racine de %d = %d\n", o, ft_sqrt(o));
	printf("racine de %d = %d\n", p, ft_sqrt(p));
	printf("racine de %d = %d\n", q, ft_sqrt(q));
	printf("racine de %d = %d\n", r, ft_sqrt(r));
	printf("racine de %d = %d\n", s, ft_sqrt(s));
	printf("racine de %d = %d\n", t, ft_sqrt(t));
	printf("racine de %d = %d\n", u, ft_sqrt(u));
	printf("racine de %d = %d\n", v, ft_sqrt(v));
	printf("racine de %d = %d\n", w, ft_sqrt(w));
	printf("racine de %d = %d\n", x, ft_sqrt(x));
}*/
