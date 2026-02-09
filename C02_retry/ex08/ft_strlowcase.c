/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 09:20:14 by zloo              #+#    #+#             */
/*   Updated: 2025/09/24 08:04:21 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

/* int main(void)
{
    char str1[] = "HELLO WORLD ^_^";
    char str2[] = "123abcXYZ";
    char str3[] = "";
    char str4[] = "ALREADYlowercase";
    
    printf("Original: HELLO WORLD ^_^ -> Uppercase: %s\n", ft_strlowcase(str1));
    printf("Original: 123abcXYZ -> Uppercase: %s\n", ft_strlowcase(str2));
    printf("Original: (empty) -> Uppercase: %s\n", ft_strlowcase(str3));
    printf("Original: ALREADYlowercase -> Uppercase: %s\n", ft_strlowcase(str4));

    return 0;
} */