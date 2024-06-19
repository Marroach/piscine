/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsaldana <marsaldana@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 10:07:02 by marsaldana        #+#    #+#             */
/*   Updated: 2024/06/19 10:23:08 by marsaldana       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return 0;
}

#include <stdio.h>
int main() {
    char str[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit";
    char find[] = "sit";
    char *result = ft_strstr(str, find);
    if (result) {
        printf("Found: %s\n", result);
    } else {
        printf("Not found\n");
    }
    return 0;
}