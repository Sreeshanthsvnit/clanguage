#include <stdio.h>
int main() {
    int a[10],b[10];
    for(int i=0;i<10;i++){
        printf("enter a :");
        scanf("%d", &a[i]);
        printf("enter b :");
        scanf("%d", &b[i]);
        a[i]=a[i]+b[i];
        b[i]=a[i]-b[i];
        a[i]=a[i]-b[i];
        printf("the new value of a is %d",a[i]);
        printf("the new value of b is %d",b[i]);
    }
return 0;
}
