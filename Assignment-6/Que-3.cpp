//Stack Using Array

// #include<bits/stdc++.h>
#include<conio.h>
#include<iostream>
using namespace std;

#define n 100

class  stack{
    int* arr;
    int top;

 public:
   stack() {
         arr = new int[n];
         top = -1;
   }   
    void push(int x) {
        if(top == n-1) {
             cout<<"Stack Overflow"<<endl;
             return;
        }
        top++;
        arr[top] = x;
    }
    void pop() {
         if(top == -1) {
              cout<<"No elements in Stack"<<endl;
              return;
         }
         top--;
    }
    int peek() {
         if(top == -1) {
              cout<<"No elements in Stack"<<endl;
              return -1;
         }
         return arr[top];
    }
    bool empty() {
        if(top == -1) {
              return true;
        }
        return false;
    }
};

int main() {

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