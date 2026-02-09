/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 08:24:12 by zloo              #+#    #+#             */
/*   Updated: 2025/10/02 12:49:18 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	i = 1;
	while (nb > 0)
	{
		i = i * nb;
		nb--;
	}
	return (i);
}

// #include <stdio.h>
// int main(void)
// {
//     printf("42! = %d\n", ft_iterative_factorial(42));
//     printf("0! = %d\n", ft_iterative_factorial(0));
//     printf("-3! = %d\n", ft_iterative_factorial(-3));
//     return 0;
// }