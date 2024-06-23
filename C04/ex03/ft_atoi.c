/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisald <marisald@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-23 17:03:15 by marisald          #+#    #+#             */
/*   Updated: 2024-06-23 17:03:15 by marisald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_atoi(char *str)
{
	short	parity;//note:
	int		number;

	parity = number = 0;

	while ((*str >= 9 && *str <= 13) || *str == 32)
		++str;

	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			parity++;
		++str;
	}	
	
	while (*str >= 48 && *str <= 57)	
	{
		number *= 10;
		number += *str - 48;
		++str;
	}
	if ( ! (parity % 2))
		return (number);
	return (-number);
}

// int main()
// {
// 	char	*s = "    ---+--+1234ab567";

// 	printf("%d\n",ft_atoi(s));	
// }