#include <stdio.h>
int main() {
    int a[10];
    int sum=0;
    for(int i=0;i<10;i++){
       printf("enter number");
       scanf("%d", &a[i]);
       sum=sum+a[i];
    }
    printf("the sum of the numbers you entered is %d",sum);
return 0;
}
