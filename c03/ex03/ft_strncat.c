/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbehra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:27:53 by gbehra            #+#    #+#             */
/*   Updated: 2024/08/03 11:38:57 by gbehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	l;

	i = 0;
	l = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[l] != '\0' && l < nb)
	{
		dest[l + i] = src[l];
		l++;
	}
	dest[l + i] = '\0';
	return (dest);
}

/*int     main(void)
{
        char    src[20] = "TEST";
        char    dest[20] = "CAMARCHE";

        printf("%s", ft_strncat(dest, src, 2));
}*/
