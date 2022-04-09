/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 23:17:31 by igomes-h          #+#    #+#             */
/*   Updated: 2022/04/09 01:30:08 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H

#define PUSHSWAP_H
#define FALSE 0
#define TRUE 1
#include "./libft/include/libft.h"
#include "./libft/include/ft_printf.h"

typedef struct s_stack
{
  int value;
  int index;
  struct s_stack *next;
  struct s_stack *previous;
} t_stack;

typedef struct s_map
{
  t_stack *head;
  t_stack *endian;
  int length;
} t_map;

typedef struct s_ps
{
  t_stack stack_a;
  t_map map_a;
  t_stack stack_b;
  t_map map_b;
} t_ps;

#endif
