/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 10:05:39 by zloo              #+#    #+#             */
/*   Updated: 2025/09/14 10:05:50 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_putchar(char c);
void    rush(int x, int y)
{
    int j; // row
    int i; // column
    if (x < 1 || y < 1)
        return ;
    j = 1;
    while (j <= y)
    {
        i = 1;
        while (i <= x)
        {
            // Top-left or bottom-left corner
            if ((i == 1 && j == 1) || (i == 1 && j == y))
                ft_putchar('A');
            // Top-right or bottom-right corner
            else if ((i == x && j == 1) || (i == x && j == y))
                ft_putchar('C');
            // Borders
            else if (i == 1 || i == x || j == 1 || j == y)
                ft_putchar('B');
            // Inside
            else
                ft_putchar(' ');
            i++;
        }
        ft_putchar('\n');
        j++;
    }
}

