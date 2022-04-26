/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_small_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 19:09:42 by igomes-h          #+#    #+#             */
/*   Updated: 2022/04/26 19:26:29 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_sort(t_stack *stack_a)
{
	if (is_stack_sorted(stack_a))
		return ;
	if (stack_a->index[0] < stack_a->index[1])
	{
		rr_(stack_a, 'a');
		if (stack_a->index[0] > stack_a->index[1])
			s(stack_a, 'a');
	}
	else
	{
		if (stack_a->index[0] < stack_a->index[2])
			s(stack_a, 'a');
		else
		{
			r(stack_a, 'a');
			if (stack_a->index[0] > stack_a->index[1])
				s(stack_a, 'a');
		}
	}
}

void	five_sort(t_stack *stack_a, t_stack *stack_b)
{
	int	i;
	int	smallest_number;

	smallest_number = 1;
	while (stack_a->length > 3)
	{
		i = 0;
		while (stack_a->index[i] != smallest_number)
			i++;
		if (i != 0)
		{
			if (i > stack_a->length / 2)
				while (stack_a->index[0] != smallest_number)
					rr_(stack_a, 'a');
			else
				while (stack_a->index[0] != smallest_number)
					r(stack_a, 'a');
		}
		p(stack_a, stack_b, 'b');
		smallest_number++;
	}
	three_sort(stack_a);
	while (stack_b->length > 0)
		p(stack_b, stack_a, 'a');
}

void	sort_small_stack(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->length == 2)
    {
		s(stack_a, 'a');
    }
    if (stack_a->length == 3)
    {
        three_sort(stack_a);
    }
	if (stack_a->length < 6)
    {
		five_sort(stack_a, stack_b);
    }
}