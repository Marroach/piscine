/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisald <marisald@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-25 10:20:04 by marisald          #+#    #+#             */
/*   Updated: 2024-06-25 10:20:04 by marisald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sqrt(int number)
{
	int	i;
	int	j;

	j = number;
	if (number <= 0)
		return (0);
	if (number == 1)
		return (1);
	i = 2;
	if (j >= 2)
	{
		while (i * i <= j)
		{
			if (i * i == j)
			{
				return (i);
			}
			i++;
		}
	}
	return (0);
}

// int main() 
// {    
//     int number = 4;
// 	int cond1 = 0;
// 	int cond2 = 1;

// 	printf("Square root of %d is %d.\n", number, ft_sqrt(number));
// 	printf("%d is %d.\n", cond1, ft_sqrt(cond1));
// 	printf("%d is %d.\n", cond2, ft_sqrt(cond2));	

// }