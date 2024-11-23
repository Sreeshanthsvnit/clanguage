#include<stdio.h>

int main(){
FILE*ptr=fopen("file1.txt","r");
if(!ptr){
    printf("error");
    return 1;
}
char ch;
int cl=1,c=0,cw=1;
while(!feof(ptr)){
 ch=fgetc(ptr);
 if(ch=='\n'){
    cl++;  
 }
 if(ch==' '||ch=='\n'){
  printf("%c",ch);   
  ch=fgetc(ptr);
  if(ch!=' '){
    cw++;
    c++; 
    printf("%d\n",cw);  
  }
 } 
 else{
    c++;
 }
 printf("%c",ch);
}
fclose(ptr);
printf("\nthe no. of lines are %d\n",cl);
printf("the no. of characters are %d\n",c-1);
printf("the no.of words are:%d\n",cw);
  
    return 0;
}