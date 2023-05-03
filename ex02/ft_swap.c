/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we-chen <we-chen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:12:59 by we-chen           #+#    #+#             */
/*   Updated: 2023/05/02 15:36:49 by we-chen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int main(void)
{
        int a = 0;
        int b = 42;
        int *nbr = &a;
        int *nbr2 = &b;
        ft_swap(nbr, nbr2);
        printf("%d\n", a);
        printf("%d", b);
        return(0);
}*/
