#include <stdio.h>
int amax(int b,int a []){
   int max=a[0];
   for(int i=0;i<b;i++){
    if(a[i]>max){
        max=a[i];
    }
   }
   return max;
}
int main() {
    int b;
    printf("how many numbers do you wanna enter");
    scanf("%d",&b);
    int a[b];
    printf("enter an array");for(int i=0;i<b;i++){
       scanf("%d",&a[i]);
    }
    printf("the max number in the array is %d",amax(b,a));
return 0;
}
