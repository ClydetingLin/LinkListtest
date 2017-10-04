#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Header.h"
#include "student.h"


int main() {

	char option1;
	head = (struct student*)malloc(sizeof(struct student));	
	head->next = NULL;

	while (1) {
		printf("\n");
		printf("===========\n");
		printf(" 1. insert\n");
		printf(" 2. dlete\n");
		printf(" 3. modify\n");
		printf(" 4. print\n");
		printf(" 5. END\n");
		printf("===========\n");
		printf("choose one(1-5) :");
		option1=getchar();
		flashBuffer();

		switch (option1) {
			case'1':
				insert_node();
				break;
			case'4':
				display();
				break;
			case '5':
				exit(0);
				break;
			default:
				printf("error, please select again! ");
		}
	}
}
