#include<iostream>
using namespace std;

int main() {
    int i=0;
    int *j = &i;
    cout<<"address of i: "<<&i<<"\n";
    cout<<"j: "<<j<<"\n";
    (*j)++;
    cout<<"i: "<<i<<"\n";
	cout<<"j: "<<j<<"\n";
    cout<<"&j: "<<&j<<"\n";
    
    *j = 20;
    cout<<"i after *j = 20: "<<i<<"\n";
    
    int **k = &j;
    cout<<"**k: "<<**k<<"\n";
    
    **k = 30;
    cout<<"*j : "<<*j<<" i: "<<i<<"\n";
    
}