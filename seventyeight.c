#include <stdio.h>
void armstrong(int a,int n){
int sum=0;
     int i,p=a;
      
    while(p!=0){
        int pow=1;
        i=p%10;
        for(int j=1;j<=n;j++){
             
            pow=pow*i;
        }
        sum=sum+ pow ;
        p=(p )/10;
    }
     if(sum==a){
        printf("you have entered a armstrong number");
     }
     else{
        printf("you have not entered a armstrong number");
     }
}
int main() {
int a;
int n;
printf("enter a number and no of digits in it");
scanf("%d%d",  &a, &n);  
armstrong(a,n);            
return 0;
}
