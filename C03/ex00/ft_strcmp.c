/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int ft_strcmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisald <marisald@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-18 10:21:41 by marisald          #+#    #+#             */
/*   Updated: 2024-06-18 10:21:41 by marisald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

// #include <stdio.h>
// #include <string.h>
// int main ()
// {
// char fst_str [] = "Hello";
// char snd_str [] = "hello";
// char thrd [] = "hello";
// printf ("%d \n", ft_strcmp (fst_str, snd_str));
// printf ("%d", ft_strcmp (snd_str, thrd));
// }
