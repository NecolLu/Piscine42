/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 08:15:36 by zloo              #+#    #+#             */
/*   Updated: 2025/09/24 07:59:23 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}
/*
int main(void)
{
    printf("The word hello is: %d\n", ft_str_is_lowercase("hello"));
    printf("The word HeLLo is: %d\n", ft_str_is_lowercase("HeLLo"));
    printf("The word hello123 is: %d\n", ft_str_is_lowercase("hello123"));
    printf("The word ' ' is: %d\n", ft_str_is_lowercase(""));
    printf("The word hello^_^ is: %d\n", ft_str_is_lowercase("hello^_^"));
    return 0;
} */