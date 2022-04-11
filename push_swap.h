/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 23:17:31 by igomes-h          #+#    #+#             */
/*   Updated: 2022/04/09 12:36:30 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H

#define PUSHSWAP_H
#define FALSE 0
#define TRUE 1
#include "./libft/include/libft.h"
#include "./libft/include/ft_printf.h"

typedef struct s_map
{
  struct s_stack *head;
  struct s_stack *endian;
  int length;
} t_map;

typedef struct s_stack
{
  int value;
  int index;
  struct s_stack *next;
  struct s_stack *previous;
  t_map *map;
} t_stack;

// void init_stacks(t_ps *ps);
t_stack *make_stack();
t_stack *st_add_top(t_map *map, int value);
t_stack *st_add_bottom(t_map *map, int value);
int st_pop_top(t_map *map);
int st_pop_bottom(t_map *map);

#endif
