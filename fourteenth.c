//printf33-47 &&58-64&&91-96&&123-126
//65-90(A)
//97 -122(a)
//48-57(1)
#include <stdio.h>
int main() {
    char c;
    printf("enter character: ");
    scanf("%c", &c);
    if((33<=c && c<=47)){
        printf("you have entered a  special character");
        
        
    }
    else if(58<=c && c<=64){
        printf("you have entered a  special character");

    }
    else if(91<=c && c<=96 ){
        printf("you have entered a  special character");
    }
    else if(123<=c && c<=126){
        printf("you have entered a  special character");
    

    }

    
    else if( 65<=c && c<=90){
        printf("you have entered a capital letter");

    }
    else if( 97<=c && c<=122){
        printf("you have entered a small letter");
    }
    else if(48<=c && c<=57){
        printf("you have entered a digit");     
    }
    else {
        printf("you have entered nothing");

    }
    

return 0;
}
