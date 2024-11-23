#include <stdio.h>
int main() {
    int b;
    printf("how many ballot papers are their :");
    scanf("%d", &b);
    int votes[b],c[6]={0,0,0,0,0,0};
    printf("enter %d numbers :\n",b);
    for(int i=0;i<b;i++){
        scanf("%d", &votes[i]);
         if(votes[i]==i+1){
           c[i]++;
         }
         else{
          c[5]++;
         } 
          
    } 
    for(int i=0;i<6;i++){
        if(i!=5){
        printf("the votes won by %d candidate is %d\n",i+1,c[i]);
        }
        else{
            printf("the spoilt ballots are %d\n",c[i]);
        }
    }
     
    
return 0;
}
