#include<stdio.h>

int main(){
FILE*ptr=fopen("LNMIITSTUDENT.DAT","a");
  char str[50];
  printf("enter information:");
  scanf("%[^\n]s",str);
  fprintf(ptr,"%s\n",str);
    return 0;
}