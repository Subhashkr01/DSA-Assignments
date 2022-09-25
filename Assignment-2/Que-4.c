#include<stdio.h>
int sum(int a,int b){
    printf("%d",a+b);
    return 0;
}
int main(){
   int a,b,p;
    scanf("%d %d",&a,&b);
    p=sum(a,b);
        return 0;
}