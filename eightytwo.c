#include <stdio.h>
 int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
 }
int main() {
    int n,r;
    printf("enter n and r:");
    scanf("%d%d",&n,&r);
    if(n>r){
    printf("NCR=%d",factorial(n)/factorial(r)*factorial(n-r));
    }
    else{
        printf("the entered combination cannot be done");
    }
return 0;
}
