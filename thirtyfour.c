#include <stdio.h>
int main() {
    int b;
    printf("enter the fibonacci you want");
    scanf("%d", &b);
    int f[b];
    f[0]=0;
    f[1]=1;
    printf("0,1,");
    if(b>2){
    for(int i=2;i<b;i++){
        f[i]=f[i-1] +f[i-2];
        printf("%d,",f[i]);
    }
    }
return 0;
}
