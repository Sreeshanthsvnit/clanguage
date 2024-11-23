#include<stdio.h>
int main(){
    int t;
    printf("enter the test cases:");
    scanf("%d", &t);
    int n[t];
    printf("enter the numbers\n");
    for(int i=0;i<t;i++ ){
    scanf("%d",&n[i]);    
    int temp=n[i];
    int count=0; 
    while(temp!=0){
        int k=temp%10;
        if(n[i]%k==0){
            count=count +1;
        }
        temp=temp/10;
    }
    printf("value is %d\n",count);
    }
    
}