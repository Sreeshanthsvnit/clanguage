#include <stdio.h>
int main() {
    int n;
    printf("enter how many odd numbers do you need");
    scanf("%d", &n);
    int sum=1;
    for(int i=1;i<=n;i++){
        printf("%d,",sum);
        sum=sum+2;
    }
return 0;
}
