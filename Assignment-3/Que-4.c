#include<stdio.h>
int main()
{
    int n, i, j, s = 0, p = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        s = n - (i+1);
        for(j = 0; j < s; j++){
            printf(" ");
        }
        p = i + 1;
  
        for(j = 0; j < p; j++){
            printf("*");
        }
        printf("\n");
    }}