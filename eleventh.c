#include <stdio.h>
int main() {
    int s;
    printf("enter seconds : \n");
    scanf("%d", &s);
    int h= s/3600;
    int m= (s%3600)/60;
    int s1= ((s%3600)%60);
    if( 0<=s && s<=86400){
        printf("the time is %02d:%02d:%02d",h,m,s1 );
    }
    else{
       printf( "the seconds you entered doesn't exist");

    }
return 0;
}
