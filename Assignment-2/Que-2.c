#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char ch;
    char s[25];
    char sen[50];
    scanf("%c\n%s\n%[^\n]s",&ch,&s,&sen);
    printf("%c\n%s\n%s",ch,s,sen); return 0;

}