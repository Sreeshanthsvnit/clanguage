#include<stdio.h>
char* copy(char str[],char str2[]){
     
     int i=0;
     while(str[i]!='\0'){
        str2[i]=str[i];
        i++;
     }
      
     return str2;
}


int main(){
char str[11]="sreeshanth";
char str2[11];
copy(str,str2);
printf("%s",str2);
    return 0;
}