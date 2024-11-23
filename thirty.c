#include <stdio.h>
int main(){
    int n;
   printf("enter the number");
   scanf("%d", &n);
   int revnumber=0;
   while(n!=0){
    int i=n%10;
    revnumber=revnumber*10+i;
    n=n/10;
   }
   printf("the reversed numberv is %d",revnumber);
return 0;
}
