/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 20:49:57 by marvin            #+#    #+#             */
/*   Updated: 2026/10/27 20:49:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next != NULL)
		last = last->next;
	last->next = new;
}

int main()
{
	t_list *lst;
	t_list *new;
	t_list *current;

	lst = NULL;
	lst = ft_lstnew("hello");

	new = ft_lstnew("world");
	ft_lstadd_back(&lst, new);

	new = ft_lstnew("42");
	ft_lstadd_back(&lst, new);

	current = lst;
	while (current != NULL)
	{
		printf("%s ->", (char *)current->content);
		current = current->next;
	}
	printf("NULL\n");
	
}