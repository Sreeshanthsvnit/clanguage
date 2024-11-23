#include <stdio.h>
int main() {
    int p;
    int prime;
    printf("enter number");
    scanf("%d", &p);
    for(int i=1;i<=p;i++){
        if(p%i==0 && i!=1 && i!=p){
               prime=1;
             
        }
         
    }
    if(prime==1){
        printf("you have entered a composite number");

    }
    else {
        printf("you have entered a prime nmuber");
    }
return 0;
}
