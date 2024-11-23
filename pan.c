#include<stdio.h>
#include<stdlib.h>
struct st{
    char name;
    int no;
}s1;
int main(){
 scanf("%s %d",&s1);
 printf("%s ",s1.name);
    return 0;
}