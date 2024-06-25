/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisald <marisald@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-25 07:02:36 by marisald          #+#    #+#             */
/*   Updated: 2024-06-25 07:02:36 by marisald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)

{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	return (ft_fibonacci(index -2) + ft_fibonacci(index -1));
}

// int main()
// {
// 	printf("%d", ft_fibonacci(6));
// }
//Fibonacci Sequence
//0, 1, 1, 2, 3, 5, 8, 13, 21, 34
//0, 1, 2, 3, 4, 5, 6, 7, 9 , 10 ,11 ...