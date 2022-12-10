//complete the function to implement the deque
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

class deque{
    node* head;
    node* tail;

    public:
    deque(){
        head = NULL;
        tail = NULL;
    }

    void push_front(int x){
        node* n = new node(x);

        if(head == NULL){
            head = n;
            tail = n;
            return;
        }

        n->next = head;
        head->prev = n;
        head = n;
    }

    void push_back(int x){
        node* n = new node(x);

        if(head == NULL){
            head = n;
            tail = n;
            return;
        }

        tail->next = n;
        n->prev = tail;
        tail = n;
    }

    void pop_front(){
        if(head == NULL){
            cout<<"Deque underflow"<<endl;
            return;
        }

        node* todelete = head;
        head = head->next;
        head->prev = NULL;

        delete todelete;
    }

    void pop_back(){
        if(head == NULL){
            cout<<"Deque underflow"<<endl;
            return;
        }

        node* todelete = tail;
        tail = tail->prev;
        tail->next = NULL;

        delete todelete;
    }

    int peek_front(){
        if(head == NULL){
            cout<<"Deque underflow"<<endl;
            return -1;
        }
        return head->data;
    }

    int peek_back(){
        if(head == NULL){
            cout<<"Deque underflow"<<endl;
            return -1;
        }
        return tail->data;
    }

    bool empty(){
        if(head == NULL){
            return true;
        }
        return false;
    }
};

int main(){
    deque q;
    q.push_front(1);
    q.push_front(2);
    q.push_back(3);
    q.push_back(4);

    cout<<q.peek_front()<<endl;
    cout<<q.peek_back()<<endl;

    q.pop_front();
    q.pop_back();

    cout<<q.peek_front()<<endl;
    cout<<q.peek_back()<<endl;

    return 0;
}