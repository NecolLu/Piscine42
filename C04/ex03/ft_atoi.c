/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 15:31:13 by zloo              #+#    #+#             */
/*   Updated: 2025/09/30 08:22:38 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == '\v') //man isspace
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}
// 1. skip whitespace
// 2. handle pos and neg signs 
// 3. read the digit 1 by 1 and turn into integer 
// 4. apply the sign to result 

// int main(int argc, char **argv)
// {
//     if (argc > 1)
//     {
//         int value = ft_atoi(argv[1]);

//         printf("String to be converted: %s\n", argv[1]);
//         printf("Converted integer: %d\n", value);
//     }
//     return 0;
// }
