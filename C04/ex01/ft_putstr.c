/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsaldana <marsaldana@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 21:08:30 by marsaldana        #+#    #+#             */
/*   Updated: 2024/06/19 21:16:22 by marsaldana       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
    int i = 0;

    while (str[i])
    {
        write (1, &str[i],1);
        i++;
    }

}


int main()
{
 ft_putstr("lol");
}