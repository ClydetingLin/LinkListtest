#ifndef LINKEDLIST_INSERT_NODE_H_
#define LINKEDLIST_INSERT_NODE_H_


#include <stdio.h>
#include <stdlib.h>
#include "Header.h"
#include "student.h"

void insert_node() {

	ptr = (struct student*)malloc(sizeof(struct student));
	printf("name :");
	scanf("%s", ptr->name);
	flashBuffer();


	printf("score :");
	scanf("%d", &ptr->score);
	flashBuffer();

	prev = head;
	current = head->next;
	while ((current != NULL) && (current->score	> ptr->score))
	{
		prev = current;
		current = current->next;
	}
	ptr->next = current;
	prev->next = ptr;



}
#endif // !LINKEDLIST_INSERT_NODE_H_