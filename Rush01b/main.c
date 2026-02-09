/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 17:53:25 by zloo              #+#    #+#             */
/*   Updated: 2025/09/21 17:56:45 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_error(void)
{
	write(1, "Error\n", 6);
}

int	is_valid_digit(char c)
{
	return (c >= '1' && c <= '4');
}

int	check_structure(char *str, int *count)
{
	int	i;

	i = 0;
	if (!is_valid_digit(str[i]))
		return (0);
	while (str[i])
	{
		if (is_valid_digit(str[i]))
		{
			(*count)++;
			i++;
			if (str[i] && str[i] != ' ')
				return (0);
		}
		else if (str[i] == ' ')
		{
			if (!is_valid_digit(str[i + 1]))
				return (0);
			i++;
		}
		else
			return (0);
	}
	return (1);
}

int	validate_input(char *str)
{
	int	count;

	count = 0;
	if (!check_structure(str, &count))
		return (0);
	if (count != 16)
		return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		print_error();
		return (1);
	}
	if (!validate_input(argv[1]))
	{
		print_error();
		return (1);
	}
	return (0);
}
