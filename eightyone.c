#include <stdio.h>
int prime(int n){
 for(int i=2;i<n;i++){
    if(n%i==0){
        return 0;
    }
    return 1;
 }
}
int main() {
int a;
printf("enter a number :");
scanf("%d",&a);
printf("\n%d",prime(a));
return 0;
}
