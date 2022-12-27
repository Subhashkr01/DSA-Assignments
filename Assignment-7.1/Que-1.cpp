//Binary search in codeforces EDU
#include<bits/stdc++.h>
using namespace std;

string binarySearch(vector<int> a,int val){
    int low=0,high=a.size()-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(a[mid]==val){
            return "yes";
        }
        else if(a[mid]<val){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return "no";
}

int main(){
    int n,k,val;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){ cin>>a[i];}
    for(int i=0;i<k;i++){
        cin>>val;
        cout<<binarySearch(a,val)<<endl;
    }
    return 0;
}