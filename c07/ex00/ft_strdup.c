/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbehra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 10:20:53 by gbehra            #+#    #+#             */
/*   Updated: 2024/08/08 12:23:21 by gbehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*tab;
	int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	tab = malloc(sizeof(src) * i);
	i = 0;
	if (tab == NULL)
		return (0);
	else
	{
		while (src[i] != '\0')
		{
			tab[i] = src[i];
			i++;
		}
		tab[i] = '\0';
		return (tab);
	}
}

int	main(void)
{
	char	src[20]="rrrgergerger";
	char	tab[];

	printf("source: %s\n", src);
	ft_strdup(src);
	printf("Destination: %s\n", tab);
	free(tab);
	return(0);
}
