#include <stdio.h>
int main() {
    int n;
    printf("enter number");
    scanf("%d", &n);
    int factorial=1;
    for(int i=1;i<=n;i++){
         factorial=i*factorial;
    }
    printf("the factorial of the number is %d",factorial);
return 0;
}
