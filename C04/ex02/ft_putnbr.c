/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsaldana <marsaldana@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 21:20:34 by marsaldana        #+#    #+#             */
/*   Updated: 2024/06/19 21:43:56 by marsaldana       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c ,1);
}

void ft_putnbr(int nb)
{
    int i = 0;

    if(nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        ft_putnbr(147483648);
        return;

    }
    if(nb < 0)
    {
         ft_putchar('-');
         nb = -nb;
    }
    if (nb >= 10) {
        ft_putnbr(nb / 10);
    }
    ft_putchar((nb % 10) + '0');
}

int main() {
    ft_putnbr(12345);
    write(1, "\n", 1);
    ft_putnbr(-12345);
    write(1, "\n", 1);
    ft_putnbr(0);
    write(1, "\n", 1);
    ft_putnbr(-2147483648);
    write(1, "\n", 1);
    ft_putnbr(2147483647);
    write(1, "\n", 1);
    return 0;
}