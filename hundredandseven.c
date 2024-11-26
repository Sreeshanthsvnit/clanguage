#include<stdio.h>
int power(int a,int b){
    int powe=1;
    for(int i=1;i<=b;i++){
        powe=powe*a;
    }
    return powe;
}
int flip(int a,int b){
    int rev=0;
    for(int i=1;i<=b;i++){
        int rem=a%10;
        rev=rem+rev*10;
        a=a/10;
    }
    a=a*power(10,b);
    a=a+rev;
    return a;
}
int main(){
    int a,b;
    printf("enter number and no of flipping digits :");
    scanf("%d%d",&a,&b);
    int x=flip(a,b);
    printf("%d",x);
  
    return 0;
}