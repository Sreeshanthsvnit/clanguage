#include <stdio.h>
int main() {
    int n;
    printf("enter number:");
    scanf("%d", &n);
    int sum1=0,sum2=0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            sum1=sum1+i ;
        }
        else  {
            sum2=sum2+i ;
        }
    }
    printf("the sum of even numbers is %d \n",sum1);
    printf("the sum of odd numbers is %d", sum2);
return 0;
}

