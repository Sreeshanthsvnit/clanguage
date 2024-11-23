#include <stdio.h>
int main() {
    int sum=0;
    int n;
    printf("enter a number\n");
        scanf("%d", &n);
     while(n>=0){
        sum= sum+n ;
        printf("enter a number\n");
        scanf("%d", &n);
         

     }
     printf("you have entered a negative number and the sum is %d",sum);
     
return 0;
}
