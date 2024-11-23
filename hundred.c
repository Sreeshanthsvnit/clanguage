#include<stdio.h>

int main(){
    int n;
    printf("enter no.of students");
    scanf("%d",&n);
FILE*ptr=fopen("LNMIITSTUDENT.JAVA","w");
 if(!ptr){
    printf("error");
    return 1;
 }
    int roll;
    char name[30];
    int marks;
    for(int i=1;i<=n;i++){
        printf("enter name:");
        scanf(" %[^\n]s",name);        
        printf("enter roll number:");
        scanf("%d",&roll);
        printf("enter total marks:");
        scanf("%d",&marks);
        fprintf(ptr,"name:%s\nroll.n0:%d\ntotalmarks:%d\n",name,roll,marks);         
    }
  
    return 0;
}