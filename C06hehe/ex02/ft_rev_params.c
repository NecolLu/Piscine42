/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 09:44:23 by zloo              #+#    #+#             */
/*   Updated: 2025/10/01 10:13:38 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	count;

	count = argc - 1;
	while (count > 0)
	{
		i = 0;
		while (argv[count][i] != '\0')
		{
			ft_putchar(argv[count][i]);
			i++;
		}
		ft_putchar('\n');
		count--;
	}
	return (0);
}
