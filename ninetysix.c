#include<stdio.h>
#include<string.h>
int main(){
char str[3][30];
char*string[3];
for(int i=0;i<3;i++){
    printf("enter string %d",i+1);
    scanf(" %[^\n]s",str[i]);
    string[i]=str[i];
      
}
 
 
for(int i=0;i<3;i++){
    int flag=1;
 for(int j=0;j<2;j++){
    if(strcmp(string[j],string[j+1])>0){
        char*temp=string[j+1];
        string[j+1]=string[j];
        string[j]= temp;
        flag=0;
    }
 }
 if(flag==1){
    break;
 }
}
 
for(int i=0;i<3;i++){
    printf("\n%s",string[i]);
}
  
    return 0;
}