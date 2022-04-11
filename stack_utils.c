/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 00:44:27 by igomes-h          #+#    #+#             */
/*   Updated: 2022/04/09 11:45:35 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *st_add_top(t_map *map, int value)
{
	t_stack *new_node;

	new_node = make_stack();
	new_node->value = value;
	new_node->next = map->head;
	new_node->previous = map->endian;
	map->head->previous = new_node;
	map->head = new_node->next;
	if (map->length)
		map->length++;
	else
		map->length = 1;
	return (new_node);
}

int st_pop_top(t_map *map)
{
	t_stack *tmp_node;

	tmp_node = map->head;
	if (map->length > 1)
	{
		map->head = map->head->next;
		map->head->previous = map->endian;
	}
	map->length--;
	free(tmp_node);
	return (map->length);
}

t_stack *st_add_bottom(t_map *map, int value)
{
	t_stack *new_node;

	new_node = make_stack();
	new_node->value = value;
	new_node->previous = map->endian;
	new_node->next = map->head;
	map->endian->next = new_node;
	if (map->length)
		map->length++;
	else
		map->length = 1;
	return (new_node);
}

int st_pop_bottom(t_map *map)
{
	t_stack *tmp_node;

	tmp_node = map->endian;
	if (map->length > 1)
	{
		map->endian = map->endian->previous;
		map->endian->next = map->head;
	}
	map->length--;
	free(tmp_node);
	return (map->length);
}
