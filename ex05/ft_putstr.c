/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrigal-t <mrigal-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:56:06 by mrigal-t          #+#    #+#             */
/*   Updated: 2022/10/26 11:22:04 by mrigal-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//declarar funcion
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		count;

	count = 0;
	while (str[count] != '\0')
	{
		ft_putchar(str[count]);
		count++;
	}
}
/*
int	main(void)
{
	char	*str;

	str = "Hola";
	ft_putstr(str);
}
*/
