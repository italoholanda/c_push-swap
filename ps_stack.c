/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 11:24:36 by igomes-h          #+#    #+#             */
/*   Updated: 2022/04/09 12:59:12 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *make_stack()
{
	t_stack *stack;

	stack = malloc(sizeof(t_stack));
	stack->value = 0;
	stack->index = 0;
	stack->next = stack;
	stack->previous = stack;
	stack->map = malloc(sizeof(t_map));
	stack->map->length = 1;
	stack->map->head = stack;
	stack->map->endian = stack;
	return (stack);
}

int	clear_stack(t_stack stack)
{
	int i;
	t_stack tmp_node;

	i = 0;
	while (i <= stack->map->length)
	{
		ft_printf("apagando.");
		tmp_node = stack;
		stack = stack->next;
		free(tmp_node);
	}
	free(stack);
}
