/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 12:42:48 by zloo              #+#    #+#             */
/*   Updated: 2025/10/02 12:51:10 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

// #include <stdio.h>
// int main(void)
// {
//     printf("2^3 = %d\n", ft_recursive_power(2, 3));
//     printf("5^0 = %d\n", ft_recursive_power(5, 0));
//     printf("2^-2 = %d\n", ft_recursive_power(2, -2));
//     printf("3^4 = %d\n", ft_recursive_power(3, 4));
//     return 0;
// }
