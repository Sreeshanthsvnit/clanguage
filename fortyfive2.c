#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(0));
    int num=(rand()%100)+1;
    int n,c=1;
    printf("enter the number :");
    scanf("%d", &n);
    if(n>num){
        printf("down\n");
     }
     if(n<num){
        printf("up\n");
     }
    for(int i=1;n!=num;i++){
        printf("enter the number :");
    scanf("%d", &n);
    if(n!=num){
        printf("your guess is not correct\n");
    }
     if(n>num){
        printf("down\n");
     }
     if(n<num){
        printf("up\n");
     }
     c++;
    }
    printf("your guess is correct and you have guessed it in %d",c);
     


return 0;
}
