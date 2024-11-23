#include <stdio.h>
int main() {
    int b;
    printf(" how many numbers do you wanna enter:");
    scanf("%d", &b);
    int a[b] ;
    printf("enter %d numbers:\n",b);
    for(int i=0;i<b ;i++){
        scanf("%d", &a[i]);
    }
    for(int i=0;i<b/2;i++){
       int  j=b-i-1;
         int temp=a[i];
         a[i]=a[j];
         a[j]=temp;
    }
    for(int i=0;i<b;i++){
      printf("%d",a[i]);
    }
return 0;
}

