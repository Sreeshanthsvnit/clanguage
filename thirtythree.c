#include <stdio.h>
int main() {
    int b,max,min;
    printf("how many digits do you wanna enter");
    scanf("%d", &b);
    int a[b];
    printf("enter the numbers:\n");
    for(int i=0;i<b;i++){
        scanf("%d", &a[i]);
    }
      max=a[0];
    for(int i=1;i<b;i++){
        if(max<a[i]){
            max=a[i];
        }
        else{
            max=max;
        }
    }
       min=a[0];
        if(max!=a[0]){
        for(int i=1;i<b;i++){
            if( min<a[i]  ){
                 min=min;
            }
            else{
                 min=a[i];
            }
        }
        }
        else{
            min=a[1];
            for(int i=2;i<b;i++){
                if(min<a[i] && a[i]<max){
                min=min;
            }
            else{
                min=a[i];
            }

            }
        }
        printf("the max is %d and min is %d",max,min); 

return 0;
}
