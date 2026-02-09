/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 10:28:06 by zloo              #+#    #+#             */
/*   Updated: 2025/09/13 13:14:28 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/* Include 42kl Header using :StdHeader in ESC mode
 * #include <unistd.h> header file
 * write the void	function_name()
 * write(1, &c, 1);
 * inlude the int main(void)
 * ft_putchar('A'); to print the character A
 * return(0);
 * main and void function is in diff curly brackets */
