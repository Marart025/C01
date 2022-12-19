/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrigal-t <mrigal-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 16:54:38 by mrigal-t          #+#    #+#             */
/*   Updated: 2022/10/24 13:22:36 by mrigal-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int	*a, int	*b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	*ptra;
	int	*ptrb;

	a = 1;
	b = 2;
	ptra = &a;
	ptrb = &b;
	ft_swap(ptra, ptrb);
	printf("a : %d, b : %d\n", a, b);
}
*/
