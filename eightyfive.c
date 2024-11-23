#include <stdio.h>
void vowel(char c){
    if(c== 65||c==69||c==73||c==79||c==85||c==97||c==101||c==105||c==111||c==117 ) {
        printf("the entered character is vowel ");
    }
    else{
        printf("not a vowel");
    }
}
int main() {
     int a;
     printf("enter a character :");
     scanf("%c",&a);
     vowel(a);
return 0;
}
