#include<stdio.h>

int main(){
char str[30];
char*p=str;
int c=0;
while(*p!='\0'){
   if(*p== 65||*p==69||*p==73||*p==79||*p==85||*p==97||*p==101||*p==105||*p==111||*p==117)
    c++;
}
printf("%d",c);
    return 0;
}