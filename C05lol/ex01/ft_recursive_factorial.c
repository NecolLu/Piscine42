/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 19:24:20 by zloo              #+#    #+#             */
/*   Updated: 2025/10/02 12:49:32 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int n)
{
	if (n < 0)
		return (0);
	if (n == 0)
		return (1);
	return (ft_recursive_factorial(n - 1) * n);
}

// 4! = 4 * 3 * 2 * 1 = 24
// 5! = 5 * 4 * 3 * 2 * 1 = 5 * 4!
// = 5 * 4 * 3!
// = 5 * 4 * 3 * 2!
// = 5 * 4 * 3 * 2 * 1!
/* ft_recursive_factorial(3)
    return 2 * 3;

    5! = (5-1)! * 5
    5! = (((1 * 2) * 3) * 4) * 5
*/

// #include <stdio.h>
// int	main(void)
// {
// 	printf("Factorial of -5 = %d\n", ft_recursive_factorial(-5));
// 	printf("Factorial of 0 = %d\n", ft_recursive_factorial(0));
// 	printf("Factorial of 1 = %d\n", ft_recursive_factorial(1));
// 	printf("Factorial of 5 = %d\n", ft_recursive_factorial(5));
// 	printf("Factorial of 10 = %d\n", ft_recursive_factorial(10));
// 	return (0);
// }
