#include<stdio.h>
#include<stdlib.h>
int main(){
FILE *ptr=fopen("file1.txt","r");
if(!ptr){
    printf("error");
    return 1;
}
char ch;
int c=0;
while(!feof(ptr)){
    ch=fgetc(ptr);
    if(ch== 65||ch==69||ch==73||ch==79||ch==85||ch==97||ch==101||ch==105||ch==111||ch==117)
    c++;
    printf("%c",ch);  
}
  printf("the no. of vowels are %d",c);
  fclose(ptr);
    return 0;
}