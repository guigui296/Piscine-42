/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbehra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 21:27:43 by gbehra            #+#    #+#             */
/*   Updated: 2024/08/05 12:18:19 by gbehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	else
		index = (ft_fibonacci(index -2) + ft_fibonacci(index -1));
	return (index);
}

/*#include <stdio.h>

int	main()
{
	int	h = 6;
	int	i = 5;
	int	j = 12;


	printf("fibo de %d = %d\n", h, ft_fibonacci(h));
	printf("fibo de %d = %d\n", i, ft_fibonacci(i));
	printf("fibo de %d = %d\n", j, ft_fibonacci(j));
	return (0);
}*/
