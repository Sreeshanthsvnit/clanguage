#include <stdio.h>
int main() {
    int h,m,s;
    printf("enter hour: \n ");
    scanf("%d", &h);
    printf("enter minute: \n");
    scanf("%d", &m);
    printf("enter seconds: \n");
    scanf("%d", &s);
    int ts=(h*3600)+(m*60)+s;
    if((0<=h && h<24) && (0<=m && m<60) && (0<=s && s<60)) {

        printf("the time is %02d:%02d:%02d",h,m,s);
        printf("the total time in seconds is%d",ts);

    }
     else{
        printf(" you have entered the wrong time");
     }
    
    
    
    
return 0;
}
