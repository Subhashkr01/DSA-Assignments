#include <bits/stdc++.h>
using namespace std;

class Node
{
	public:
	int data;
	Node *next;
	Node *prev;
};

void reverse(Node **head_ref)
{
	Node *temp = NULL;
	Node *current = *head_ref;

	while (current != NULL)
	{
		temp = current->prev;
		current->prev = current->next;
		current->next = temp;			
		current = current->prev;
	}

	if(temp != NULL )
		*head_ref = temp->prev;
}

void push(Node** head_ref, int new_data)
{
	// Allocate node
	Node* new_node = new Node();

	new_node->data = new_data;

	new_node->prev = NULL;

	new node */
	new_node->next = (*head_ref);	

	if((*head_ref) != NULL)
	(*head_ref)->prev = new_node ;

	/* Move the head to point to the
	new node */
	(*head_ref) = new_node;
}

void printList(Node *node)
{
	while(node != NULL)
	{
		cout << node->data << " ";
		node = node->next;
	}
}

int main()
{
	// Start with the empty list
	Node* head = NULL;
	
	push(&head, 2);
	push(&head, 4);
	push(&head, 8);
	push(&head, 10);
	
	cout <<
	"Original Linked list" << endl;
	printList(head);
	
	// Reverse doubly linked list
	reverse(&head);
	
	cout <<
	"Reversed Linked list" << endl;
	printList(head);		
	
	return 0;
}

