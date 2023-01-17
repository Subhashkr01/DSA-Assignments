//terviewbit.com/problems/first-repeating-element

int Solution::solve(vector<int> &A) {
    int n=A.size();
    int min=-1;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[A[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(mp[A[i]]>1)
        {
            min=i;
            break;
        }
    }
    return min+1;
}