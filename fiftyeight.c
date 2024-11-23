#include <stdio.h>
int main() {
    int a[10],b[10],c[10];
    for(int i=0;i<10;i++){
        printf("enter two numbers :");
        scanf("%d%d", &a[i], &b[i]);
        c[i]=a[i]+b[i];
    }
    for (int i=0;i<10;i++){
        printf("the sum of two set of numbers you entered is %d",c[i]);
    }

return 0;
}
