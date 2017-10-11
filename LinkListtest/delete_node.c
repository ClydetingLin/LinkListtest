#ifndef LINKLISTED_DELETE_NODE_
#define LINKLISTED_DELETE_NODE_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Header.h"
#include "student.h"


#endif // !LINKLISTED_DELETE_NODE_

void delete_node() {
	
	char del_name[20], ans;
	printf("Input delete name:");
	scanf("%s", del_name);
	flashBuffer();
	
	prev = head;
	current = head->next;
	while ((current != NULL) && (strcmp(current->next, del_name) != 0))
	{
		prev = current;
		current = current->next;

	}

	if (current != NULL) {

		printf("You want to delete(y/n)");
		ans = getchar();
		flashBuffer();

		if (ans == 'y' || ans == 'Y') {
			prev->next = current->next;
			free(current);
			printf("%s is delete now!", del_name);
		}
	}
	else
	{
		printf("Cannot find this data");
	}

}

