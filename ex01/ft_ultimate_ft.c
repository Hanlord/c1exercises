/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we-chen <we-chen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:12:51 by we-chen           #+#    #+#             */
/*   Updated: 2023/05/02 14:52:48 by we-chen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	int	a;

	a = 42;
	*********nbr = a;
}

/*int main(void)
{
        int a = 0;
        int *nbr = &a;
        int **nbr2 = &nbr,
            ***nbr3 = &nbr2,
            ****nbr4 = &nbr3,
            *****nbr5 = &nbr4,
            ******nbr6 = &nbr5,
            *******nbr7 = &nbr6,
            ********nbr8 = &nbr7,
            *********nbr9 = &nbr8;

        ft_ultimate_ft(nbr9);
        printf("%d", a);
        return 0;
}*/
