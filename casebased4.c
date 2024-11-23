#include<stdio.h>
int main(){
   int t,gem=0;
   printf("enter num of test cases\n");
   scanf("%d",&t);
   char a[t][100];
   for(int i=0;i<t;i++){
      scanf(" %[^\n]s",a[i]);
   }
      for(char j='a';j<='z';j++){
        int k=0,count=0;
        for(int i=0;i<t;i++){ 
        while(a[i][k]!='\0'){
         if(a[i][k]==j){
            count++;
            break;
         }
         k++;
        }
        }
        if(count==t){
         gem++;
        }

      }
   printf("%d",gem);
}