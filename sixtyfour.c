#include <stdio.h>
int main() {
    int a[3][3];
    printf("enter the numbers:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum=sum+a[i][j];
             
        }
        printf("the sum of row %d   is %d\n",i+1,sum);
    }
return 0;
}
