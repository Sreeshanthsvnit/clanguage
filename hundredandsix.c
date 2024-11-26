#include<stdio.h>
struct item{
    char item_name[10];
    int quantity;
    int price;
    int amount;
}s;
int amo(struct item s){
    
    s.amount=s.quantity*s.price;
    return s.amount;
}
int main(){

 printf("enter name:");
 scanf("%[^\n]s",s.item_name);
 printf("enter quantity:");
 scanf("%d",&s.quantity);
 printf("enter price:");
 scanf("%d",&s.price);
 int x=amo(s);
 printf("the amount of the item %s  is %d",s.item_name,x);
  
    return 0;
}