/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we-chen <we-chen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:13:16 by we-chen           #+#    #+#             */
/*   Updated: 2023/05/02 14:53:36 by we-chen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*int main(void)
{
        int a = 25;
        int b = 5;
        printf("%d\n" , a);
        printf("%d\n" , b);
        ft_ultimate_div_mod(&a, &b);
        printf("%d\n" , a);
        printf("%d\n" , b);
        return(0);
}*/
