/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbehra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 17:46:41 by gbehra            #+#    #+#             */
/*   Updated: 2024/07/31 16:09:39 by gbehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int     main(void)
{
        char    src[20]="Test";
        char    dest[30];

        printf("Source: %s\n", src);
        ft_strcpy(dest, src);
        printf("Destionation après le swap: %s\n", dest);

        return(0);
}*/
