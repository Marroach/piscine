/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsaldana <marsaldana@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 21:01:21 by marsaldana        #+#    #+#             */
/*   Updated: 2024/06/19 21:06:48 by marsaldana       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
    int i = 0;

    while(str[i])
    {
        i++;
    
    } 
    return (i);
}

#include <stdio.h>

int main (void)
{
	printf("%i", ft_strlen("123456789"));
}