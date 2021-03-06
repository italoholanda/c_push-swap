/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_small_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 19:09:42 by igomes-h          #+#    #+#             */
/*   Updated: 2022/07/14 00:17:34 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_small_stack(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->length == 2)
		s(stack_a, 'a');
	if (stack_a->length == 3)
		three_sort(stack_a);
	if (stack_a->length >= 4)
		five_sort(stack_a, stack_b);
}
