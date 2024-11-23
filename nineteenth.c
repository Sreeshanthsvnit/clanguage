#include <stdio.h>
int main() {
    char c;
    printf("enter character:");
    scanf("%c", &c);
    (97<=c && c<=122)?printf("you have entered small case"):printf("you have not entered a small case");
return 0;
}
