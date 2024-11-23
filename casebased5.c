#include<stdio.h>
int main(){
    int t;
    printf("enter test cases");
    scanf("%d", &t);
    printf("enter numbers\n");
    int n[t];
    for(int i=0;i<t;i++){
    scanf("%d", &n[i]);
    int a=0,b=1,fib;
    while(1){
        fib=a+b;
        if(fib==n[i]){
            printf("fibo\n");
            break;
        }
        if(fib>n[i]){
            printf("not fibo\n");
            break;
        }
        a=b;
        b=fib;
    }
    }
   return 0;    
}