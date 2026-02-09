/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 08:27:17 by zloo              #+#    #+#             */
/*   Updated: 2025/09/24 08:01:14 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}

/* int main(void)
{
    printf("The word HELLO is: %d\n", ft_str_is_uppercase("HELLO"));
    printf("The word HeLLo is: %d\n", ft_str_is_uppercase("HeLLo"));
    printf("The word HELLO123 is: %d\n", ft_str_is_uppercase("HELLO123"));
    printf("The word ' ' is: %d\n", ft_str_is_uppercase(""));
    printf("The word HELLO^_^ is: %d\n", ft_str_is_uppercase("HELLO^_^"));
    return 0;
} */