//Multiply Polynomials using Linked List

#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int coeff;
    int pow;
    node* next;

    node(int c, int p){
        coeff = c;
        pow = p;
        next = NULL;
    }
};

class polynomial{
    node* head;

    public:
    polynomial(){
        head = NULL;
    }

    void insert(int c, int p){
        node* n = new node(c, p);

        if(head == NULL){
            head = n;
            return;
        }

        node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = n;
    }

    void display(){
        node* temp = head;
        while(temp != NULL){
            cout<<temp->coeff<<"x^"<<temp->pow<<" + ";
            temp = temp->next;
        }
        cout<<"0"<<endl;
    }

    polynomial* multiply(polynomial* p){
        polynomial* newpoly = new polynomial();
        node* temp1 = head;
        node* temp2 = p->head;

        while(temp1 != NULL){
            while(temp2 != NULL){
                int c = temp1->coeff * temp2->coeff;
                int p = temp1->pow + temp2->pow;
                newpoly->insert(c, p);
                temp2 = temp2->next;
            }
            temp1 = temp1->next;
            temp2 = p->head;
        }
        return newpoly;
    }
};

int main(){
    polynomial* p1 = new polynomial();
    polynomial* p2 = new polynomial();
    polynomial* p3 = new polynomial();

    p1->insert(1, 2);
    p1->insert(2, 1);
    p1->insert(3, 0);

    p2->insert(1, 1);
    p2->insert(1, 0);

    p3 = p1->multiply(p2);

    p1->display();
    p2->display();
    p3->display();

    return 0;
}