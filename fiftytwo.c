#include <stdio.h>
int main() {
    for(int i=0;i<=3;i++){
        for(int n=1;n<=3-i ;n++){
            printf(" ");   
        }
        int k=1;
        for(int j=1;j<=i+1;j++){
            printf("%d",k);
            k++;

        }
         
        for(int y=1;y<=i;y++){
            --k;
            printf("%d",k-1);
        }
        printf("\n");
    }
return 0;
}
