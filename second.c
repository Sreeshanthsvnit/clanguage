#include <stdio.h>
int main() {
    float m1,m2,m3,m4,m5;
    printf("enter marks1:\n");
    scanf("%f", &m1);
    printf("enter marks2:\n");
    scanf("%f", &m2);
    printf("enter marks3:\n");
    scanf("%f", &m3);
    printf("enter marks4:\n");
     scanf("%f", &m4);    
    printf("enter marks5:\n");
     scanf("%f", &m5);
     float sum=m1+m2+m3+m4+m5;
     printf("the total marks are: %f",sum);
     printf("the totalpercentage is:%f",(sum/500)*100 );
return 0;
}

