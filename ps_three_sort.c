/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_three_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 19:09:42 by igomes-h          #+#    #+#             */
/*   Updated: 2022/07/18 23:27:10 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_132_231(t_stack *stack_a)
{
	rr_(stack_a, 'a');
	if (!is_stack_sorted(stack_a))
		s(stack_a, 'a');
}

void	sort_213_312(t_stack *stack_a)
{
	if (stack_a->index[2] > stack_a->index[0])
		s(stack_a, 'a');
	else
		r(stack_a, 'a');
}

void	sort_321(t_stack *stack_a)
{
	r(stack_a, 'a');
	s(stack_a, 'a');
}

void	three_sort(t_stack *stack_a)
{
	if (is_stack_sorted(stack_a))
		return ;
	if (stack_a->index[1] > stack_a->index[0])
		return (sort_132_231(stack_a));
	if (stack_a->index[2] > stack_a->index[1])
		return (sort_213_312(stack_a));
	else
		return (sort_321(stack_a));
}
