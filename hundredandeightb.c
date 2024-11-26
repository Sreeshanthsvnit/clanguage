#include<stdio.h>
int comp(char a[],char b[]){
    int i=0,flag=0;
    while(a[i]!='\0'||b[i]!='\0'){
        if(a[i]>b[i])
        return 1;
        if(a[i]<b[i])
        return -1;
        i++;
    }
    return flag;
}
int main(){
int x=comp("sree","srees");
printf("%d",x);
  
    return 0;
}