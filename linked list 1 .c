#include  <stdio.h>
#include <stdlib.h>

struct Node {
int data;
struct Node *next;
};

int main()
{
struct Node *head = NULL; 
struct Node *newNode, *secondNode;

newNode = (struct Node*) malloc(sizeof(struct Node));
newNode->data = 10;
newNode->next = NULL;

head = newNode; 



secondNode = (struct Node*) malloc(sizeof(struct Node));
secondNode->data = 20;
secondNode->next = NULL;


newNode->next = secondNode;


struct Node *temp = head;
while (temp != NULL) {
printf("%d ->", temp->data);
temp = temp->next;
}
printf("NULL\n");
return 0;
}

