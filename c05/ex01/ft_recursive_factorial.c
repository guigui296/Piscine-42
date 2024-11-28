/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbehra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:27:53 by gbehra            #+#    #+#             */
/*   Updated: 2024/08/03 14:36:32 by gbehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb = nb * ft_recursive_factorial (nb - 1));
}

/*int	main(void)
{
	int	u=5;
	int	p;

	p = ft_recursive_factorial(u);
	printf("%d\n", p);
}*/
