#include <iostream>
using namespace std;

//you can also use class
struct Node{
	int data;
	Node *next;
};

/**
 * newNode function will return a node with data as val
 * */
Node *newNode(int val){
	Node *temp = new Node;
	temp->data = val;
	temp->next = NULL;
	return temp;
}

/**
 * createLinkedList will read the `n` inputs from user and will create a linked list of size `n`
 * */
 Node *createLinkedList(int n){
 	int a;
 	Node *head = NULL;
 	Node *tail = NULL; 
 	
 	for(int i=0;i<n;i++){
 		cin>>a;
 		Node *temp = newNode(a);
 		
 		if(head==NULL){
 			head = temp;
 			tail = temp;
 		}
 		else{
 			tail->next = temp; 
 			tail = temp;
 		}
 	}
 	
 	return head;
 }
 
 /**
  * printLinkedList will print all the elemets of linked list
  * */
void printLinkedList(Node *head){
	while(head!=NULL){
		cout<<head->data<<"-> "; 	//print the data of head
		head = head->next; //move the head to next node
	}
	cout<<"null\n";
}

/**
 * getSizeOfLinkedList will take head of linkedList in input and will return it's size
 * */
int getSizeOfLinkedList(Node *head){
    int count =0;
    Node *temp = head;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
	return count;
}

/**
 * getKthNodeOfLinkedList will take head  of linkedList and an positive interger k in input and 
 * it's will return kth node (1 based counting)
 * */

Node* getKthNodeOfLinkedList(Node *head, int k){
    for(int i=1;i<k;i++){
        head = head->next;
    }
	return head;
}

int main() {
	int n,k;
	cin>>n>>k;
	Node* head =createLinkedList(n);
	cout<<"linkedList: "; 
	printLinkedList(head);
	cout<<"size: "<<getSizeOfLinkedList(head)<<"\n";
	cout<<"val of Kth Node "<<getKthNodeOfLinkedList(head,k)->data<<"\n";
}