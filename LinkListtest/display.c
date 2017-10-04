#ifndef  LinkList_DISPLAY_H_
#define LinkList_DISPLAY_H_

#include <stdio.h>
#include <stdlib.h>

#include "Header.h"
#include "student.h"

void display() {

	int count = 0;
	if (head->next == NULL) {
		printf("Linked List is NULL!!");
	}
	else
	{
		printf("\n");
		printf(" name		score\n");
		printf("-------------------------\n");
		current = head->next;
		while (current != NULL)
		{
			printf(" %-12s %3d\n", current->name, current->score);
			count++;
			current = current->next;
		}
		printf("-------------------------\n");
		printf(" Total is %d log\n", count);
	}
}

#endif // ! LinkList_DISPLAY_H_