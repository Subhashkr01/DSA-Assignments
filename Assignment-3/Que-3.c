#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
 
    int n, j;
    int i=0,R=0,L=0, f, s;
    
 scanf("%d",&n);
    int a[n][n];
    
 for(int f = 0; f < n; f++){
       for(int s = 0; s< n; s++){
         scanf("%d",&a[f][s]);
       }}
 while(i<n){
    R=R+a[i][i];
    i++;
  }
     j=n-1,i=0;
     while(i<n)
  {
    L=L+a[i][j];
    i++;
    j--;
  }
    
 printf("%d",abs(R-L));
    return 0;
}