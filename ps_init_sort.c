/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_init_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 20:12:44 by igomes-h          #+#    #+#             */
/*   Updated: 2022/04/26 19:44:46 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_index(t_stack *stack_a)
{
	int	count;
	int	i;
	int	j;

	i = 0;
	while (i < stack_a->length)
	{
		j = 0;
		count = 0;
		while (j < stack_a->length)
		{
			if (stack_a->list[i] > stack_a->list[j])
				count++;
			j++;
		}
		stack_a->index[i] = count + 1;
		i++;
	}
}

void	init_sort(t_stack *stack_a, t_stack *stack_b)
{
	sort_index(stack_a);
	if (stack_a->length <= 5)
		sort_small_stack(stack_a, stack_b);
	else
		ft_putstr_fd("RADIX SORT\n", 1);
}
