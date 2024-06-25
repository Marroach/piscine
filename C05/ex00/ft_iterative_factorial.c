/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisald <marisald@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-24 07:20:06 by marisald          #+#    #+#             */
/*   Updated: 2024-06-24 07:20:06 by marisald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	r;

	r = 1;
	while (nb > 0)
	{
		r *= nb;
		nb--;
	}
	if (nb < 0)
		return (0);
	return (r);
}

// #include <stdio.h>
// int main ()
// {
// int nb = 6;
// printf ("%d", ft_iterative_factorial(nb));
// }