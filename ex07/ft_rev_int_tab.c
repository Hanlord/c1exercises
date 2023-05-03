/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we-chen <we-chen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:13:44 by we-chen           #+#    #+#             */
/*   Updated: 2023/05/02 16:18:52 by we-chen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = swap;
		i++;
	}
}

/*int main(void)
{
        int i;
        int size;
        size = 4;
        i = 0;
        int tab[] = {0, 0, 7, 3};
        ft_rev_int_tab(tab, size);
        while(i < size)
        {
                printf("%d: %d ", i + 1, tab[i]);
                i++;
        };

        return 0;
}*/
