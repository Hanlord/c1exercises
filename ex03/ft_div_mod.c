/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we-chen <we-chen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:13:07 by we-chen           #+#    #+#             */
/*   Updated: 2023/05/02 14:52:39 by we-chen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main(void)
{
        int a = 25;
        int b = 5;
        int div;
        int mod;
        ft_div_mod(a, b, &div, &mod);
        printf("a = %d, b = %d\n", a, b);
        printf("div = %d\n", div);
        printf("mod = %d\n", mod);
        return(0);
}*/
