/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisald <marisald@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-24 14:14:30 by marisald          #+#    #+#             */
/*   Updated: 2024-06-24 14:14:30 by marisald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)

	{
	int	total;

	total = nb;
	while (power > 1)
	{
		total *= nb;
		power --;
	}
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	return (total);
}

// int main()
// {
// 	int nb = 2;
// 	int power = 2;

// 	printf("%d\n", ft_iterative_power(nb, power));
// 	printf("%d\n", ft_iterative_power(-1, 2));
// //0^0	
// 	printf("%d\n", ft_iterative_power(0, 0));
// }