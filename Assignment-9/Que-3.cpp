//interviewbit.com/problems/check-palindrome

int Solution::solve(string A) {
    int n=A.size();
    int i=0,j=n-1;
    while(i<j)
    {
        if(A[i]!=A[j])
        {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}