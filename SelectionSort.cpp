/* 
  Selection Sort Algorithm
  **Time Complexity: O(n^2)
  **Space Complexity: O(1)
*/

#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int>A){
    for(int i=0; i<A.size(); i++){
        cout<<A[i]<<" ";
    }
    cout<<"\n ";

}

int getIndexOfMinElementFromiToEnd(vector<int>A, int i){
   min_element(A.begin(), A.end());

   return 0;
}

void sort(vector<int>&A){
    for(int i=0;i<A.size();i++){
        int j=getIndexOfMinElementFromiToEnd(A,i);
        swap(A[i],A[j]);
        cout<<"i:"<<i<<" vector ";
        printVector(A);
    }
}


int main(){
   vector<int>A={6,1,2,3,4,6,1};

   sort(A);
   cout<<"sorted vector: ";
   printVector(A);

return 0;
}