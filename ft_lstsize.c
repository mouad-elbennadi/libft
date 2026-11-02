/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 20:34:56 by marvin            #+#    #+#             */
/*   Updated: 2026/10/27 20:34:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stddef.h>
#include<stdio.h>

typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;

unsigned int ft_lstsize(t_list *lst)
{
    unsigned int count;
    
    count = 0;
    while(lst != NULL)
        count++;
    return (count);
}