#include<stdio.h>
 int main(){
    int p,t,r;
    printf("enter principle:");
    scanf("%d", &p);
    printf("enter time:");
    scanf("%d", &t);
    printf("enter rate:");
    scanf("%d", &r);
    int i=(p*t*r)/100;
    printf("the intrest %d",i);
    return 0;

 }


