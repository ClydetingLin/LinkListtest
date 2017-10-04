#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void insert_node();
void display();

void flashBuffer();

struct student{
	char name[20];
	int score;
	struct student *next;
} *ptr, *head, *current, *prev, *modiyNode;


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
	while ((current!=NULL)&&(current->score	> ptr->score))
	{
		prev = current;
		current = current->next;
	}
	ptr->next = current;
	prev->next = ptr;



}


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
		while (current!=NULL)
		{
			printf(" %-12s %3d\n", current->name,current->score);
			count++;
			current = current->next;
		}
		printf("-------------------------\n");
		printf(" Total is %d log\n", count);
	}
}

void flashBuffer() {

	while (getchar()!='\n')
	{
		continue;
	}
}