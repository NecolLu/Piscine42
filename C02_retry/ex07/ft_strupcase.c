/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 08:52:05 by zloo              #+#    #+#             */
/*   Updated: 2025/09/24 08:03:25 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

/* int main(void)
{
    char str1[] = "hello world ^_^";
    char str2[] = "123abcXYZ";
    char str3[] = "";
    char str4[] = "alreadyUPPERCASE";
    
    printf("Original: hello world ^_^ -> Uppercase: %s\n", ft_strupcase(str1));
    printf("Original: 123abcXYZ -> Uppercase: %s\n", ft_strupcase(str2));
    printf("Original: (empty) -> Uppercase: %s\n", ft_strupcase(str3));
    printf("Original: alreadyUPPERCASE -> Uppercase: %s\n", ft_strupcase(str4));

    return 0;
} */