//Binary-Search
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int start = 0;
    int end = n-1;
    int mid;
    while(start<=end){
        mid = (start+end)/2;
        if(arr[mid]==key){
            cout<<"Found at index "<<mid<<endl;
            return 0;
        }
        else if(arr[mid]>key){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    cout<<"Not Found"<<endl;
    return 0;
}