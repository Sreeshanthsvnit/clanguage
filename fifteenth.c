#include <stdio.h>
int main() {
    int a,b,c,d,e;
    printf("enter your marks\n");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    if(a<0 || 100<  a || b< 0 || 100<  b || c< 0 || 100<  c || d< 0 || 100<  d || e< 0 || 100<  e){
        printf("you have entered wrong marks");
        return 1;
    }

    
    int f=(a+b+c+d+e)/5;
    
    if(f>=80){
        printf("your division is A");
    }
    else if(60<=f && f<80){
        printf("your division is b");
    }
    else if(40<=f && f<60){
        printf("your division is d");
    }
    else{
        printf("you are failed");
    }
return 0;
}
