#pragma once
struct student {
	char name[20];
	int score;
	struct student *next;
} *ptr, *head, *current, *prev, *modiyNode;