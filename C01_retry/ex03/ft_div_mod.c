/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 10:41:34 by zloo              #+#    #+#             */
/*   Updated: 2025/09/16 10:49:43 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*
#include <stdio.h>

int	main(void)
{
	int		a;
	int		b;
	int		div;
	int		mod;

	a = 100;
	b = 25;
	ft_div_mod(a, b, &div, &mod);
	printf("a / b = %d, remainder = %d\n", div, mod);
	return (0);
}
*/