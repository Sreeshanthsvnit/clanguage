#include<stdio.h>
char*concat(char s[],char b[],int a){
    int i=0;
    while(s[i]!='\0'){
        i++;
    }
     
    for(int j=0;j<a;j++){
        s[i]=b[j];
        i++;
    }
    return s;
}
int main(){
    char s[]="sree";
concat(s,"shan",4);
printf("%s",s);
  
    return 0;
}