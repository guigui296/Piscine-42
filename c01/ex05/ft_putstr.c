/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbehra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:38:15 by gbehra            #+#    #+#             */
/*   Updated: 2024/07/30 09:53:43 by gbehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

/*int	main(void)
{	
	char	*str;

	str = "Bonjour, nous sommes a 42";

	ft_putstr(str);
	return (0);
}*/
