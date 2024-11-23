#include <stdio.h>
int main() {
    int a[10],c1=0,c2=0,c3=0;
    for(int i=0;i<10;i++){
        printf("enter the number");
        scanf("%d", &a[i]);
        if(a[i]>0){
          c1++;
        }
        if(a[i]<0){
            c2++;
        }
        if(a[i]=0){
            c3++;
        }
    }
    printf("the total number of positive numbers you entered is %d",c1);
    printf("the total number of negative numbers you entered is %d",c2);
    printf("the total number of zeros you entered is %d",c2);
        
return 0;
}
