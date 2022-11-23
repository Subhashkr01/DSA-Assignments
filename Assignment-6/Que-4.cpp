//Stack Using Doubly Linked List

#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

class stack{
    node* top;

    public:
    stack(){
        top = NULL;
    }

    void push(int x){
        node* n = new node(x);

        if(top == NULL){
            top = n;
            return;
        }

        n->next = top;
        top->prev = n;
        top = n;
    }

    void pop(){
        if(top == NULL){
            cout<<"Stack underflow"<<endl;
            return;
        }

        node* todelete = top;
        top = top->next;
        top->prev = NULL;

        delete todelete;
    }

    int peek(){
        if(top == NULL){
            cout<<"Stack underflow"<<endl;
            return -1;
        }
        return top->data;
    }

    bool empty(){
        if(top == NULL){
            return true;
        }
        return false;
    }
};

int main(){

    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.empty()<<endl;

    return 0;
}