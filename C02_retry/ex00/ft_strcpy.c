/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 15:16:20 by zloo              #+#    #+#             */
/*   Updated: 2025/09/24 11:17:34 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/* int main(void)
{
    char src[] = "Hello Hi Hey";
    char dest[20];

    printf("Source:      %s\n", src);
    
    ft_strcpy(dest, src);
    
    printf("Destination: %s\n", dest);

    return 0;
} */
