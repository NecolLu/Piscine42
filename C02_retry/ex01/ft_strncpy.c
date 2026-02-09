/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 15:26:58 by zloo              #+#    #+#             */
/*   Updated: 2025/09/26 09:51:16 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i != n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/* int main()
{
    char src[] = "I want 2 strncpy";
    char dest[20] = "aaaaaaaaaaaaaaaaaaa";
	unsigned int n = 8;
	ft_strncpy(dest, src, n);
	printf("Destination: %s\n", dest);

//Mirza's example:
// must print null print n is bigger than src
// n        = 10
// i        = 5
// src      = "Hello\0"
// Dest[10] = "Hello"

// example: src = "I want 2 strncpy"
//         dest = "aaaaaaaaaaaaaaaaaaa"
//            n = 18
// end result: dest = "I want 2 strncpy\0\0a\0"
} */