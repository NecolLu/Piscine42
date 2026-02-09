/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 16:21:56 by zloo              #+#    #+#             */
/*   Updated: 2025/09/29 10:11:25 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int		holding;

	holding = *a;
	*a = *b;
	*b = holding;
}

/*int	main(void)
{
	int		c;
	int		d;
	int		*a;
	int		*b;

	c = 5;
	d = 10;
	a = &c;
	b = &d;
	ft_swap(a, b);
	printf("c = %d and d = %d\n", c, d);
	return (0);
}*/