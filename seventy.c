#include <stdio.h>
int main() {
    int b;
    printf("how many numbers do you wanna enter :");
    scanf("%d", &b);
    int a[b];
    printf("enter %d numbers :\n",b);
    for(int i=0;i<b;i++){
        scanf("%d", &a[i]);
    }
    int s,c=0;
    printf("what is the  element for which do you wanna check occurence:\n");
    scanf("%d", &s);
    for(int i=0;i<b;i++){
        if(a[i]==s){
            c++;
        }
    }
    if(c>0){
        printf("the occurence of the element you entered is %d",c);
    }
    else{
        printf("the element you entered is invalid");
    }
return 0;
}
