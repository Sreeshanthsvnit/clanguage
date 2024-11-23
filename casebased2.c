#include<stdio.h>
int main(){
    int n,m;
    printf("enter n  and m\n");
    scanf("%d %d", &n,&m);
    int g[100]={0};
    int a,b,k;
    for(int i=0;i<m;i++){
        printf("%d input",i+1);
        scanf("%d %d %d",&a,&b,&k);
        for(int j=a-1;j<=b-1;j++){
            g[j]=g[j]+k;
        }

    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+g[i];
    }
    printf("the avg is %d",sum/n);
    return 0;
     

}