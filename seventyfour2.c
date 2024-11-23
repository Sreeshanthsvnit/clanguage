#include <stdio.h>
int main() {
   int a,b;
    printf("how many elements do you need in array 1 and 2:\n");
    scanf("%d%d", &a, &b);
    int A[a],B[b],C[a+b];
    printf("enter a sorted array of %d elements\n",a);
    for(int i=0;i<a;i++){
        scanf("%d", &A[i]);
    }
    A[a]=999999999;
    printf("enter a sorted array of %d elements\n",b);
    for(int i=0;i<b;i++){
        scanf("%d", &B[i]);         
    }  
    B[b]=999999999;
    int i=0,j=0;
    for(int k=0;k<a+b;k++){
        if(A[i]>B[j]){
            C[k]=B[j];
            j++;
        }
        else{
           C[k]=A[i];
           i++;
        }
        printf("%d",C[k]);
    }
     
     
    
return 0;
}
