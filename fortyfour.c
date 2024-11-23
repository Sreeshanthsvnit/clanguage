#include <stdio.h>
int main() {
    float u;
    printf("enter the units of power used");
    scanf("%f", &u);
    int r;
    if(u>0 && u<=200){
     r=0.5*u;
    }
    if(u>200 && u<=400){
        r=100+0.65*(u-200);
    }
    else if(u>400 && u<=600){
        r=230+0.8*(u-400);
    }
    else if(u>600){
        r=425+1.25*(u-600);
    }
    else{
        printf("you have entered a wrong input");
        return 1;
    }
    printf("the rate for consumption of units is %.2f",r);
return 0;
}
