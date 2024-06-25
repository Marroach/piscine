/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisald <marisald@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-25 06:55:38 by marisald          #+#    #+#             */
/*   Updated: 2024-06-25 06:55:38 by marisald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)

{
	int	total;

	total = nb;
	while (power > 1)
	{
		return (nb * ft_recursive_power(nb, (power -1)));
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

// 	printf("%d\n", ft_recursive_power(nb, power));
// 	printf("%d\n", ft_recursive_power(-1, 2));
// //0^0	
// 	printf("%d\n", ft_recursive_power(0, 0));
// }