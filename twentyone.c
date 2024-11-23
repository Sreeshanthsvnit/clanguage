#include <stdio.h>
int main() {
    int a,b;
    printf("enter a :");
    scanf("%d", &a);
    printf("enter b :");
    scanf("%d", &b);
    char operation;
    printf("enter operation(p for product,s for sum,d for difference,q for quotient,r for remainder):");
    scanf(" %c", &operation);
    switch(operation){
        case 's': 
        printf("the sum of the two numbers  is %d",a+b);
        break;
        case 'd':
        printf("the difference of the two numbers is%d ",a-b);
        break;
        case 'p':
        printf("the product of the two numbers is %d",a*b);
        break;
        case 'q':if(b!=0){
            printf("the quotient of the two numbers is %d",a/b);
                        }
            else {
                printf("error");
            }            
        break;
        case'r':if(b!=0){
                printf("the remainder of the two numbers is %d",a%b);
        }
        else {
            printf("error");
            }
        break;
        default  : printf("you have entered a wrong operation");
    }

return 0;
}
