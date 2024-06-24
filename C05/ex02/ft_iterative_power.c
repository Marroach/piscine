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
int ft_iterative_power(int nb, int power)
{

if (power < 0)
{
	return 0;
}
else if(power == 0)
{
	return 1;
}
else if (power == 1){
	return(nb);
}
else if (nb > 0 && power > 0)
{
nb *= nb;
power --;
}
return(nb);
}

// int main()
// {
// 	int nb = 2;
// 	int power = 2;

// 	printf("%d\n", ft_iterative_power(nb, power));
// //nb 0	
// 	printf("%d\n", ft_iterative_power(0, power));
// //0^0	
// 	printf("%d\n", ft_iterative_power(0, 0));
// }