#include <stdio.h>
#include <math.h>
int main() {
    double n,x;
    printf("enter n and x");
    scanf("%lf%lf", &n, &x);
    if(n==1){
        printf("the value of y(x,n) is %lf",1+x);
    }
    else if(n==2){
        printf("the value of y(x,n) is %lf",1+(x/n));
    }
    else if(n==3){
        printf("the value of y(x,n) is %lf",1 +pow(x,n));
    }
    else if(n>3 || n<1){
        printf("the value of y(x,n) is %lf",1+n*x);
    }

return 0;
}
