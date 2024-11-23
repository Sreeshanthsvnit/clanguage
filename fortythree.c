#include <stdio.h>
int main() {
    float s;
    printf("enter the sales amount");
    scanf("%f", &s);
    float c;
    if(s<=500){
        c=0.05*s;
    }
    else if(s>500 && s<=2000){
        c=35+(s-500)*0.1;
    }
    else if (s>2000 && s<=5000){
        c=185+(s-2000)*(0.12);
    }
    else if(s>5000){
        c=(0.125)*s;
    }
    printf("the comission is %.2f",c);
return 0;
}
