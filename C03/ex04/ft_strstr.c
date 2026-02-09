/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 08:14:28 by zloo              #+#    #+#             */
/*   Updated: 2025/10/02 17:54:52 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (*to_find == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
int  main(void)
{
        char str[] = "Hello, how are you?";
        char to_find1[] = "are";
        char to_find2[] = "you";
        char to_find3[] = "xyz";
        
        printf("str = Hello, how are you?\n");
        printf("Find '%s': %s\n", to_find1, ft_strstr(str, to_find1));
        printf("Find '%s': %s\n", to_find2, ft_strstr(str, to_find2));
        printf("Find '%s': %s\n", to_find3, ft_strstr(str, to_find3));
        return (0);
}