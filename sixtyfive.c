#include <stdio.h>
int main() {
    int a[3][3];
    printf("enter the numbers:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("the transpose matrix is:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[j][i]);
        }
       printf("\n");
    }

return 0;
}
