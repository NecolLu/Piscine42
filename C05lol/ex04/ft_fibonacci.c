/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 13:16:19 by zloo              #+#    #+#             */
/*   Updated: 2025/10/02 15:11:12 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
// (index - 1) means to go back to the number before
// (index - 2) means to go back to the number before before that
// formula : F(n - 1) + F(n -2) = F(n)

// #include <stdio.h>
// int main(int argc, char **argv) 
// when we pass in the arguments,
// they are strings (aka ascii), so we use atoi to change it
// {
//     for (int i = 1; i < argc; i++)
//     {
//         int n = atoi(argv[i]); 
//         printf("%d: %d\n", n, ft_fibonacci(n));
//     }
// }
