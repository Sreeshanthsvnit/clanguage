#include <stdio.h>
int main() {
    int a[10],c1=0,c2=0;
    for(int i=0;i<10;i++){
        printf("enter the number");
        scanf("%d", &a[i]);
        if(a[i]%2==0){
            c1++;
        }
        else{
            c2++;
        }
    }
        printf("the total even numbers is %d",c1);
        printf("the total odd numbers is %d",c2);
     
return 0;
}
