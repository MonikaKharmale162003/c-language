#include<stdio.h>
int main(){
    int age;
    printf("enter a age");
    scanf("%d",&age);
    age>=18 ? printf("apply to vote"):printf("not apply to age");
    return 0;
}