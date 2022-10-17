#include <bits/stdc++.h>

using namespace std;

struct Node {
	int data;
	struct Node* prev, *next;
};

struct Node* getNode(int data)
{
    struct Node* newNode =
		(struct Node*)malloc(sizeof(struct Node));

	newNode->data = data;
	newNode->prev = newNode->next = NULL;
	return newNode;
}

void sortedInsert(struct Node** head_ref, struct Node* newNode)
{
	struct Node* current;
    if (*head_ref == NULL)
		*head_ref = newNode;

	else if ((*head_ref)->data >= newNode->data) {
		newNode->next = *head_ref;
		newNode->next->prev = newNode;
		*head_ref = newNode;
	}

	else {
		current = *head_ref;

		while (current->next != NULL &&
			current->next->data < newNode->data)
			current = current->next;

		newNode->next = current->next;

		if (current->next != NULL)
			newNode->next->prev = newNode;

		current->next = newNode;
		newNode->prev = current;
	}
}

void insertionSort(struct Node** head_ref)
{
	struct Node* sorted = NULL;

	struct Node* current = *head_ref;
	while (current != NULL) {

		struct Node* next = current->next;

		current->prev = current->next = NULL;

		sortedInsert(&sorted, current);

		current = next;
	}

	*head_ref = sorted;
}

void printList(struct Node* head)
{
	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
}

void push(struct Node** head_ref, int new_data)
{
	struct Node* new_node =
		(struct Node*)malloc(sizeof(struct Node));

	new_node->data = new_data;

	new_node->next = (*head_ref);
	new_node->prev = NULL;

	if ((*head_ref) != NULL)
		(*head_ref)->prev = new_node;

	(*head_ref) = new_node;
}

int main()
{
	struct Node* head = NULL;

	push(&head, 9);
	push(&head, 3);
	push(&head, 5);
	push(&head, 10);
	push(&head, 12);
	push(&head, 8);

	cout << "Doubly Linked List Before Sortingn";
	printList(head);

	insertionSort(&head);

	cout << "nDoubly Linked List After Sortingn";
	printList(head);

	return 0;
}
