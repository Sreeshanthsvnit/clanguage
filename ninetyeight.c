#include<stdio.h>
#include<stdlib.h>

int main(){
int*ptr1=calloc(9,9*sizeof(int));
int*ptr2=calloc(9,9*sizeof(int));
int*ptr3=calloc(9,9*sizeof(int));
printf("enter elements of 1 matrix");
for(int i=0;i<9;i++){
    scanf("%d",(ptr1+i));       
}
 printf("enter element of 2 matrix");
for(int i=0;i<9;i++){
   scanf("%d",(ptr2+i));
    *(ptr3+i)=0;
}
for(int i=0;i<3;i++){
     for(int k=0;k<3;k++){
    for(int j=0;j<3;j++){
      *ptr3=(*(ptr1+(3*i)+j))*(*(ptr2+3*j+k))+*ptr3;
    }
    ptr3++;
     }
}
ptr3=ptr3-9;
for(int i=0;i<9;i++){
  printf("%d ",*(ptr3+i));
  if(i==2||i==5||i==8){
    printf("\n");
  }
}
free(ptr1);
free(ptr2);
free(ptr3);
  
    return 0;
}