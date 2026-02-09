/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 08:32:50 by zloo              #+#    #+#             */
/*   Updated: 2025/09/24 11:20:47 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}
/* int main(void)
{
    printf("The word Hello World is: %d\n", ft_str_is_printable("Hello World"));
    printf("The word 123456789 is: %d\n", ft_str_is_printable("123456789"));
    printf("The word ^_^&*$#@! is: %d\n", ft_str_is_printable("^_^&*$#@!"));
    printf("The word ' ' is: %d\n", ft_str_is_printable(""));
    printf("The word \"Hello\\nWorld\" is: %d\n", 
    ft_str_is_printable("Hello\nWorld"));
    printf("The word \"Tab\\tCharacter\" is: %d\n", 
    ft_str_is_printable("Tab\tCharacter"));
    return 0;
} */