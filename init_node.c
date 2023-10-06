#include <stdio.h>
#include <stdlib.h>

//def node
typedef struct s_node
{
	void			*data;
	struct s_node	*next;
}					t_node;

//init node
t_node *init_node(t_node *node, void *data)
{
	node = malloc(sizeof(t_node) * 1);
	if (!node)
		exit(1);
	node->data = data;
	node->next = NULL;
	return(node);
}

//add list
void add_list(t_node *node ,t_node **head)
{
	t_node *p ;
	
	p= *head;
	if(!p)
	{
		*head = node;
		return;
	}
	while(1)
	{
		if(!p->next)
			break;
	}
	p -> data = node->data;
	p -> next = node;
}

int	main(void)
{
	t_node	*d_node;
	t_node	*s_node;
	/* t_node	*list; */
	int		num;
	char	s[] = "vim大好き";

	num = 1;
	d_node = init_node(d_node, &num);
	s_node = init_node(s_node, s);
	printf("data is %d\n", *((int *)d_node->data));
	printf("data is %s\n", (char *)s_node->data);
	add_list(d_node,&s_node);
	printf("data is %s\n", (char *)s_node->data);
	printf("data is %d\n", *((int *)s_node->next->data));

}
