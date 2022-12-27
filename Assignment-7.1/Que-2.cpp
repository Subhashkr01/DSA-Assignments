//closest to the left
#include<bits/stdc++.h>
using namespace std;

int ClosestToLeft(vector<int> a,int n ,int val){
    int low=-1,high=n;
    while(low+1<high){
        int mid=(low+high)/2;
      if(a[mid]<=val){
            low=mid;
        }
        else{
            high=mid;
        }
    }
    return low;
}

int main(){
    int n,k,val;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){ cin>>a[i];}
    for(int i=0;i<k;i++){
        cin>>val;
        int res = ClosestToLeft(a,n,val);
        cout<<res+1<<endl;
    }
    return 0;
}

/*int main(){
    int n,k,val;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){ cin>>a[i];}
    for(int i=0;i<k;i++){
        cin>>val;
        int res = lower_bound(a.begin(),a.end(),val)-a.begin();
        cout<<res<<endl;
    }

return 0;
}*/