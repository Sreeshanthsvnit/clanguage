#include <stdio.h>
int main() {
    int r[10][4];
    for(int i=0;i<10;i++){       
        for(int j=0;j<4;j++){
            if(j==0){
                r[i][j]=i+1;
            }
            else{
            printf("enter the marks of  %d subject of %d student:\n",j,i+1);                
            scanf("%d", &r[i][j]);
               }
        }
    }
    int t[10];
    for(int i=0;i<10;i++){
        t[i]=r[i][1]+r[i][2]+r[i][3];
        printf("total marks obtaied by %d student is %d\n",i+1,t[i]);
    }
    int  max[4]={r[0][1],r[0][2],r[0][3],t[0]},a[4];
     for(int i=0;i<10;i++){
        for(int j=0;j<4;j++){
            if(r[i][1]>max[0]){
                max[0]=r[i][1];
                a[0]=i;
            }
             if(r[i][2]>max[1]){
                max[1]=r[i][2];
                a[1]=i;
            }
             if(r[i][3]>max[2]){
                max[2]=r[i][3];
                a[2]=i;
            }
           
        }
        if(max[3]<t[i]){
            max[3]=t[i];
            a[3]=i;
        }
     }
     for(int i=0;i<3;i++){
        printf("the maximum marks of the %d subject is %d and  secured by %d student\n",i+1,max[i],a[i]);
     }
     printf("the maximum total marks is obtained is %d secured by %d student\n",max[3],a[3]);
return 0;
}
