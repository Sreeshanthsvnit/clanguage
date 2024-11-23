#include <stdio.h>
int main() {
    int a;
    int n;
    printf("enter the number and no of digits in it");
    scanf("%d%d", &a, &n);
    int p=a;
    int sum=0;
    while(a!=0){
        int i=a%10;
        int pow=1;
        for(int j=1;j<n;j++){
            pow=pow*10;
        }
        sum=sum+pow*i;
        --n;
        a=a/10;

    }
    if(sum==p){
        printf("you have entered a palindrome");
    }
    else{
        printf("you have not entered a palindome");
    }
return 0;
}
