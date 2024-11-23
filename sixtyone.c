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
    for(int i=0;i<b;i++){
       int flag=1;
        for(int j=0;j<b-1;j++){
            if(a[j+1]<a[j]){
                int temp=a[j+1];
                 a[j+1]=a[j];
                 a[j]=temp;
                 flag=0;
            }
        }
        if(flag==1){
            break;
        }
    }
    printf("the sorted array is:\n");
    for(int i=0;i<b;i++){
        printf("%d\n",a[i]);
    }
return 0;
}
