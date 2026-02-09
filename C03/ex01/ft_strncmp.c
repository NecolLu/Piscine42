/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 10:50:46 by zloo              #+#    #+#             */
/*   Updated: 2025/09/25 08:18:43 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	if (i == n)
	{
		return (0);
	}
	return (s1[i] - s2[i]);
}
/* int main (int argc, char **argv)
{
	//for (int i = 1; i < argc - 1; i += 2)
	{
		//printf("%d\n", strncmp(argv[i], argv[i + 1], 6));
		printf("%d\n", ft_strncmp("hello", "hello", 6));
	}
	return 0;
} */