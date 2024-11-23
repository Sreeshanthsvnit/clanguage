#include<stdio.h>
#define max(a,b) maxi(a,b)
int maxi(int a,int b){
    if(a>b){
        return a;
    }
    return b;
}
int main(){
int n=max(5,5);
printf("%d",n);
  
    return 0;
}