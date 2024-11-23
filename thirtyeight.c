#include <stdio.h>
 
int main() {
    int n;
    printf("enter how many squares do you need");
    scanf("%d", &n);   
    for(int i=1;i<=n;i++){
        int pow=1;
       for(int j=1;j<=2;j++){
        pow=pow*i;
       }

        printf("%d,",pow);
         
    }
return 0;
}