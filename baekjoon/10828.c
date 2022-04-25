#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct s_node{
	struct s_node *next;
	struct s_node *prev;
	int data;
} t_node;

typedef struct s_dummy{
	t_node *head;
	t_node *tail;
	int size;
} t_dummy;



t_node *create_node(int data)
{
	t_node *new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->data = data;
	return ((t_node *)new_node);
}

void create_dummy(t_dummy *dummy)
{
	dummy->head = create_node(0);
	dummy->tail = create_node(0);
	dummy->size = 0;
}

void push(t_dummy *dummy, char *cmd)
{
	while
}

void command(t_dummy *dummy, char *cmd)
{
	if (strncmp(cmd, "push", 4))
		push(dummy, cmd);
	else if (strcmp(cmd, "pop"))
		pop(dummy);
	else if (strcmp(cmd, "size"))
		size(dummy);
	else if (strcmp(cmd, "empty"))
		empty(dummy);
	else if (strcmp(cmd, "top"))
		top(dummy);
}

int main()
{
	t_dummy dummy;
	int	cmd_len;
	char cmd[50];


	scanf("%d", &cmd_len);
	create_dummy(&dummy);
	while (cmd_len--)
	{
		scanf("%[^\n]s", cmd);
		command(&dummy, cmd);
	}
}