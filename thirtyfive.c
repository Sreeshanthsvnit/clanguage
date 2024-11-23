#include <stdio.h>
int main() {
    int n;
    printf("enter the number :");
    scanf("%d", &n);
    int sum=0;
    int i ;
    while(n!=0){
       i=n %10 ;
       sum=sum+i ;
       n=n/10;
    }
     while(sum>9){
         
        int sum2=0;
        while(sum!=0){
            int j=sum%10;
            sum2=sum2+j;
            sum=sum/10;
        }
        sum=sum2;

     }
     printf("the single digit sum of a number is %d",sum );
return 0;
}
