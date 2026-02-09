/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 14:02:03 by zloo              #+#    #+#             */
/*   Updated: 2025/09/29 11:53:44 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	c = nb % 10 + '0';
	write(1, &c, 1);
}
// nb=123
// ft_putnbr(123);
// -> ft_putnbr(12);
//   -> ft_putnbr(1);
// 123
// int main(int argc, char **argv)
// {
//     for (int i = 1; i < argc; i++)
//     {
//         int n = atoi(argv[i]);
//         printf("\nTest on %d\n", n);
//         ft_putnbr(n);
//         printf("\n\n");
//     }
//     return 0;
// }