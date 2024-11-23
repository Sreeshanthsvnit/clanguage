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
 else if(ch==' '){
 cw++;
 }
 else{
    c++;
 }
 printf("%c",ch);
}
printf("the no. of lines are %d\n",cl);
printf("the no. of characters are %d\n",c);

printf("the no.of words are:%d\n",cw);
  
    return 0;
}