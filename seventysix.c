#include <stdio.h>
void even(int a){
    if(a%2==0){
        printf("the entered number is even");
    }
    else{
        printf("the entered number is odd");
    }
}
int main() {
    int a;
printf("enter a number: ");
scanf("%d",&a);
even(a);
return 0;
}

