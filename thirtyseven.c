#include <stdio.h>
int main() {
    int n;
    printf("enter how many even numbers do you need");
    scanf("%d", &n);
    int sum=0;
    for(int i=1;i<=n;i++){
        printf("%d,",sum);
        sum=sum+2;
    }
return 0;
}