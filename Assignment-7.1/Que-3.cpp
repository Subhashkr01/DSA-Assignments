#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,val;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){ cin>>a[i];}
    for(int i=0;i<k;i++){
        cin>>val;
        int res = lower_bound(a.begin(),a.end(),val)-a.begin();
        cout<<res+1<<endl;
    }

return 0;
}

