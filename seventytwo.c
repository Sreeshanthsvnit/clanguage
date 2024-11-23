#include <stdio.h>
int main() {
  int b;
    printf("how many numbers do you wanna enter :");
    scanf("%d", &b);
    int a[b];
    printf("enter %d numbers :\n",b);
    for(int i=0;i<b;i++){
        scanf("%d", &a[i]);
    }
    int N;
    printf("how many times do you wanna rotate:\n");
    scanf("%d", &N);
    for(int i=1;i<=N;i++){
        int temp=a[0];
        for(int j=0;j<b;j++){
            if(j!=b-1){
            a[j]=a[j+1];
        }
        else{
            a[j]=temp;
        }
    }
    }
    printf("the rotated array is:\n");
    for(int i=0;i<b;i++){
        printf("%d\n",a[i]);
    }
return 0;
}
