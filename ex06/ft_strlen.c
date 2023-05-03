/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we-chen <we-chen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:13:36 by we-chen           #+#    #+#             */
/*   Updated: 2023/05/02 15:47:17 by we-chen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

/*int	main(void)
{
	char	str[] = "Hello world";
	int	len;

	len = ft_strlen(str);
	printf("The length of the string is %d\n", len);
	return (0);
}*/
