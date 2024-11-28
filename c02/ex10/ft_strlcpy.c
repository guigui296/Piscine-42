/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbehra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 10:01:25 by gbehra            #+#    #+#             */
/*   Updated: 2024/08/01 11:58:25 by gbehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	size = ft_strlen(src);
	while (i < size)
	{
		dest[i] = '\0';
	}
	return (size);
}

/*int	main(void)
{
	char	src[]="123456789";
	char	dest[]="";

	printf("%d", ft_strlcpy(dest, src, ft_strlen(src)));
	
	return(0);
}*/
