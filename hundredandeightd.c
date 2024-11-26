#include<stdio.h>
char*reverse(char s[]){
    int i=0;
    while(s[i]!='\0'){
     i++;
    }
    for(int j=0;j<=(i-1)/2;j++){
         char temp=s[j];
         s[j]=s[i-1-j];
         s[i-1-j]=temp;
    }
    return s;
}
int main(){
    char s[]="sreeshanth";
reverse(s);
printf("%s",s);
  
    return 0;
}