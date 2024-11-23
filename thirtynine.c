#include <stdio.h>
int main() {
    int n;
    printf("enter the number of terms");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        printf("%d/%d!+",i,i);
    }
return 0;
}
