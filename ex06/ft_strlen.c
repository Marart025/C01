/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrigal-t <mrigal-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:50:11 by mrigal-t          #+#    #+#             */
/*   Updated: 2022/10/27 14:58:39 by mrigal-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}
/*
int		main(void)
{
	char *str;

	str = "Aqui hay 20 caracteres";
	printf("Retour (22): %d\n", ft_strlen(str));
}
*/
