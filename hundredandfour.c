#include<stdio.h>
enum color{red,green,blue,yellow,black,white};
int main(){
  
 enum color c;
 input:
 printf("enter a number");
 scanf("%d",&c);
 switch(c){
    case 0:
    printf("0xFF0000");
    break;
    case 1:
    printf("0x00FF00");
    break;
    case 2:
    printf("0x0000FF");
    break;
    case 3:
    printf("0xFFFF00");
    break;
    case 4:
    printf("0x000000");
    break;
    case 5:
    printf("0xFFFFFF");  
    default:
    printf("error");
    goto input;  
 }
    return 0;
}