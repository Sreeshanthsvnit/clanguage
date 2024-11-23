#include <stdio.h>
int main() {
    int m,p,c,e;
    printf(" enter marks of mathematics ");
    scanf("%d", &m);
    printf(" enter marks of  physics");
    scanf("%d", &p);
    printf(" enter marks of chemistry  ");
    scanf("%d", &c);
    printf(" enter marks of entrance ");
    scanf("%d", &e);
    int cm=(m/2)+(p/2)+(c/2);
    if(0<=m && m<=200 && 0<=p && p<=200 && 0<=c && c<=200 && 0<=e && e<=100){
        printf("the cutoff marks are %d",cm);
    }
    else{
        printf("you have entered wrong marks");
    }
return 0;
}
