/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbehra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:45:37 by gbehra            #+#    #+#             */
/*   Updated: 2024/07/26 11:07:00 by gbehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
        int     i;

        i = 0;

        while (str[i] != '\0')
        {
        	i++;
	}
	return (i);
}

int     main(void)
{
        char    *str;

        str = "Bonjour";

	printf("%d\n", ft_strlen(str));
        return (0);
}
    
