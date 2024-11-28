/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbehra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 15:12:58 by gbehra            #+#    #+#             */
/*   Updated: 2024/08/05 11:57:42 by gbehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = 2;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	res = nb * ft_recursive_power(nb, power - 1);
	return (res);
}

/*int	main(void)
{
	int	b;

	b = ft_recursive_power(2, 10);
	printf("%d\n", b);
}*/
