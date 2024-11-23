#include <stdio.h>
int main() {
    int a[3][3];
    printf("enter the numbers:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d", &a[i][j]);
        }
    }
   int  max=a[0][0];
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        if(a[i][j]>max){
            max=a[i][j];
        }
    }
   }
   int  min=a[0][0];
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        if(a[i][j]<min){
            min=a[i][j];
        }
    }
   }
    printf("the max and min are %d and %d",max,min);
return 0;
}
