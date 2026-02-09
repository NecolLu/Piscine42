/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 12:40:39 by zloo              #+#    #+#             */
/*   Updated: 2025/10/02 12:50:13 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = 1;
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

// #include <stdio.h>
// int main(void)
// {
//     printf("2^0  = %d\n", ft_iterative_power(2, 0));   // expected 1
//     printf("2^3  = %d\n", ft_iterative_power(2, 3));   // expected 8
//     printf("5^1  = %d\n", ft_iterative_power(5, 1));   // expected 5
//     printf("3^4  = %d\n", ft_iterative_power(3, 4));   // expected 81
//     printf("(-2)^3 = %d\n", ft_iterative_power(-2, 3)); // expected -8
//     printf("2^-3 = %d\n", ft_iterative_power(2, -3));   // expected 0
//     return (0);
// }
