#include<stdio.h>

int main(){
int a=10;
int *ptr=&a;
printf("the vale odf a is %d",a);
printf("enter the modified value:");
scanf("%d",ptr);
printf("the modified value of a is %d",a);
  
    return 0;
}