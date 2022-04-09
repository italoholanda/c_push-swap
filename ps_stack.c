/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 00:44:27 by igomes-h          #+#    #+#             */
/*   Updated: 2022/04/09 01:53:34 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack* make_stack()
{
  t_stack *stack;

  stack = malloc(sizeof(t_stack *));
  stack->next = NULL;
  stack->previous = NULL;
  stack->value = NULL;
  stack->index = 0;
  return (stack);
}

t_stack* st_add_top(int value, t_map *map) {
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

int st_pop_top(t_map *map) {
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

int st_add_bottom() {

}
