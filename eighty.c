#include <stdio.h>
int f(int n){
    
    // if(n==1){
    //     return n-1;
    // }
    // else if(n==2){
    //     return n-1;
    // }
    if (n <= 2)
        return n;
    return f(n-1)+f(n-2);
}
int main() {
    int n;
     printf("enter how many terms do you need:\n");
     scanf("%d",&n);
     for(int i=1;i<=n;i++){
        printf("%d,",f(i));
     }
return 0;
}
