#include <stdio.h>
int main() {
    int a,b;
    printf("how many elements do you need in array 1 and 2:\n");
    scanf("%d%d", &a, &b);
    int A[a],B[b],C[a+b];
    printf("enter a sorted array of %d elements\n",a);
    for(int i=0;i<a;i++){
        scanf("%d", &A[i]);
        C[i]=A[i];
    }
    printf("enter a sorted array of %d elements\n",b);
    for(int i=0;i<b;i++){
        scanf("%d", &B[i]);
        C[a+i]=B[i];
    } 
     for(int i=0;i<a+b;i++){
        for(int j=0;j<a+b;j++){
            if(C[j]>C[j+1]){
                int temp=C[j+1];
                 C[j+1]=C[i];
                 C[i]=temp;
            }
        }
    }
    printf("the sorted array is:\n");
    for(int i=0;i<a+b;i++){
        printf("%d\n",C[i]);
    } 
return 0;
}
