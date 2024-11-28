/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbehra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 15:01:39 by gbehra            #+#    #+#             */
/*   Updated: 2024/08/03 11:34:04 by gbehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[l] != '\0')
	{
		dest[l + i] = src[l];
		l++;
	}
	dest[l + i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	src[20] = "TEST";
	char	dest[20] = "CAMARCHE";

	printf("%s", ft_strcat(dest, src));
}*/
