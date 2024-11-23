#include <stdio.h>
int main() {
    int b;
    printf("how many numbers do you wanna enter :");
    scanf("%d", &b);
    int a[b];
    printf("enter %d numbers\n ",b);
    for(int i=0;i<b;i++){
        scanf("%d", &a[i]);
    }
    int s,c;
    printf("which number do tou wanna search :\n");
    scanf("%d", &s);
    for(int i=0;i<b;i++){
        if(a[i]==s){
              c=i;
        }
         
    }
    if(c>=0 && c<b){
        printf("the index of the number you entered is %d",c);

    }
    else{
        printf("the number you entered is not in the array");
    }
return 0;
}
