/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstadd_front.c                                 :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: moel-ben <marvin@42.fr>                   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/25 23:13:39 by moel-ben         #+#    #+#              */
/*   Updated: 2026/10/25 23:15:45 by moel-ben        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if(!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

int main()
{
	t_list *lst;

	lst = ft_lstnew("42");
	ft_lstadd_front(&lst ,ft_lstnew(" world "));
	ft_lstadd_front(&lst ,ft_lstnew(" hello "));


	while(lst != NULL)
	{
		printf("%s ->", (char *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}