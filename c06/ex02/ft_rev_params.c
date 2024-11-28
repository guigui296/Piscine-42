/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbehra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 13:08:54 by gbehra            #+#    #+#             */
/*   Updated: 2024/08/07 08:22:03 by gbehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(int argc)
{
	int	i;

	i = 0;
	while (argc > i)
	{
		i++;
	}
	i--;
	return (i);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	l;

	l = 1;
	i = ft_strlen(argc);
	if (argc > 1)
	{
		while (l < argc)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				write(1, &argv[i][j], 1);
				j++;
			}
			write (1, "\n", 1);
			i--;
			l++;
		}
	}
}
