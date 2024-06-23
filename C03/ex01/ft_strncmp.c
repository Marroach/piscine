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
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i < n)
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int main ()
// {
// char fst_str [] = "help!";
// char snd_str [] = "hello";
// printf ("%d", ft_strncmp (fst_str, snd_str, 3));
// return (0);
// }
