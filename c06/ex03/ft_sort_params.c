/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbehra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 16:12:36 by gbehra            #+#    #+#             */
/*   Updated: 2024/08/07 13:41:46 by gbehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **s1, char **s2)
{
	char	*tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

int	main(int argc, char **argv)
{
	int	n;
	int	j;

	n = 1;
	if (argc > 1)
	{
		while (n < argc - 1)
		{
			if (ft_strcmp(argv[n], argv[n + 1]) > 0)
			{
				ft_swap(&argv[n], &argv[n + 1]);
				n = 1;
			}
			else
				n++;
		}
		j = 1;
		while (j < argc)
		{
			ft_putstr(argv[j]);
			j++;
		}
	}
	return (0);
}
