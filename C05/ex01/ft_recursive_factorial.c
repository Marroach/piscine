/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisald <marisald@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-24 07:36:16 by marisald          #+#    #+#             */
/*   Updated: 2024-06-24 07:36:16 by marisald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_recursive_factorial(int nb)
{
	if(nb < 0)
	{
		return (0);	
	}
	else if (nb == 0 || nb == 1)
	{
		return (1);
	}
	else 
	{
	return	nb * ft_recursive_factorial(nb -1);
	}
}

// #include <stdio.h>
// int main ()
// {
// int nb = 6;
// printf ("%d", ft_recursive_factorial(nb));
// }