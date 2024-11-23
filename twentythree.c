#include <stdio.h>
int main() {
    int a,b;
    printf("enter a :");
    scanf("%d", &a);
    printf("enter b :");
    scanf("%d", &b);
    int pow1=1,pow2=1;
    int n;
    printf("enter the power you need");
    scanf("%d", &n);
    if(n>=0){
    for(int i=1;i<=n;i++){
        pow1=a*pow1;
        pow2=b*pow2;
    }
    printf("the power of a is %d \n",pow1 );
    printf("the power of b is %d",pow2);
    }
    else {
        for(int j=-1;j>=n;j--){
            pow1=pow1/a;
            pow2=pow2/b;
        }
        printf("the power of a is %f",(float)pow1);
        printf("the power of b is %f",(float)pow2);

        }
    
return 0;
}
