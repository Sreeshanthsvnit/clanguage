#include <stdio.h>
int main() {
    int a,b;
    printf("enter a :");
    scanf("%d", &a);
    printf("enter b :");
    scanf("%d", &b);
    int pow1=a,pow2=b;
    int n;
    printf("enter the power you need");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        pow1=a*pow1;
        pow2=b*pow2;
    }
    printf("the power of a is %d \n",pow1 );
    printf("the power of b is %d",pow2);
return 0;
}
