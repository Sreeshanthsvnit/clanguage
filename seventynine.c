#include <stdio.h>
void exchange(int x,int y){
    int temp=x;
    x=y;
    y=temp;
    printf("the swapped numbers are %d and %d",x,y);
    }
int main() {
    int a,b;
    printf("enter two numbers :");
    scanf("%d%d", &a, &b);
    exchange(a,b);
return 0;
}
