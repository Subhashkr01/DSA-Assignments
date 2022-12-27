 #include<bits/stdc++.h>
 using namespace std;

 int greaterThan(vector<int> a,int n ,int val){
    int low=-1,high=n;
    while(low+1<high){
        int mid=(low+high)/2;
      if(a[mid]>=val){
            high=mid;
        }
        else{
            low=mid;
        }
    }
    return high;
}

 int smallerThan(vector<int> a,int n ,int val){
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

    int fastSearch(vector<int> a,int n ,int l,int r){
        // int low=-1,high=n;
        int res1 = greaterThan(a,n,l);
        int res2 = smallerThan(a,n,r);
        return res2-res1+1;
    }
 
 int main(){
    int n,k,l,r;
    cin>>n;
   vector<int> a(n);
   for(int i=0;i<n;i++){ cin>>a[i];}
    cin>>k;
    for(int i=0;i<k;i++){
      cin>>l>>r;
      int res = fastSearch(a, n, l,r);
      cout<<res<<endl;
    }
    cout<<endl;
 
 return 0;
 }

 /*   int n,k,l,r;
   cin>>n;
   vector<int> a(n);
   for(int i=0;i<n;i++){ cin>>a[i];}
    cin>>k;
    for(int i=0;i<k;i++){
      cin>>l>>r;
      int res = lower_bound(a.begin(),a.end(),r)-a.begin();
      int res1 = lower_bound(a.begin(),a.end(),l)-a.begin();
      cout<<res-res1<<endl;
    }*/