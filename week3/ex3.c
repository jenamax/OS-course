#include <stdio.h>

struct Node{
	int data;
	struct Node *next;
};

void printList(struct Node *head){
	struct Node *cur = head;
	printf("%p", cur);
	while (cur != NULL){
		printf("%i ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}


void main(){
	printf("I here");
	struct Node head;
	printf("I here");
	struct Node n1;
	struct Node n2;
	struct Node n3;
	
	head.data = 1;
	head.next = &n1;
	
	n1.data = 2;
	n1.next = &n2;
	
	n2.data = 3;
	n2.next = &n3;

	n3.data = 4;
	
	printf("%p", &head);
	printList(&head);
}
