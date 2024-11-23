#include <stdio.h>
void palindrome(int a){
    int r,sum=0,temp=a;
    while(a!=0){
      r=a%10;
    sum=sum*10+r;
    a=a/10;
    }
    if(sum==temp){
       printf("the entered number is palindrome");
    }
    else{
        printf("the entered number is not a palindrome");
    }
}
int main() {
 int a;
 printf("enter a number :");
 scanf("%d", &a);
 palindrome(a);
return 0;
}
