#include<stdio.h>
int main(){
    int a,b;
    float i,j;
    scanf("%d %d %f %f",&a,&b,&i,&j);
    printf("%d %d %.2f %.2f",a-b,a+b,i-j,i+j);
    return 0;
    }