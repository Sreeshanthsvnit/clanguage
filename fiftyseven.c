#include <stdio.h>
int main() {
    int b;
    printf("how many digits do you wanna enter");
    scanf("%d", &b);
    int a[b];
    printf("enter the numbers:\n");
    for(int i=0;i<b;i++){
        scanf("%d", &a[i]);
    }
    int max=a[0];
    for(int i=1;i<b;i++){
        if(max<a[i]){
            max=a[i];
        }
        else{
            max=max;
        }
    }
        int smax=a[0];
        if(max!=a[0]){
        for(int i=1;i<b;i++){
            if(smax<a[i] && a[i]<max){
                smax=a[i];
            }
            else{
                smax=smax;
            }
        }
        }
        else{
            smax=a[1];
            for(int i=2;i<b;i++){
                if(smax<a[i] && a[i]<max){
                smax=a[i];
            }
            else{
                smax=smax;
            }

            }
        }
     printf("the firstmax is %d and second max is %d",max,smax);
return 0;
}

