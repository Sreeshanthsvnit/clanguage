#include <stdio.h>
int main() {
    int n;
    printf("enter the number");
    scanf("%d", &n);
    int sum=0;
    while(n!=0){
        int i=n%10;
        sum=sum+i;
        n=n/10;

    }
    printf("the sum of the digits of  the number is %d",sum);
return 0;
}
