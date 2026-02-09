/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 11:04:22 by zloo              #+#    #+#             */
/*   Updated: 2025/09/16 17:49:08 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	if (*b != 0)
	{
		div = *a / *b;
		mod = *a % *b;
		*a = div;
		*b = mod;
	}
}
/*
int     main()
{       
        int a = 75;
        int b = 25;
        
        ft_ultimate_div_mod(&a, &b);
        printf("a = 75 \nb = 25 \n");
        printf("a/b = %d and remainder = %d \n", a , b);
        
        return(0);
}*/