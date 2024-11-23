 #include<stdio.h>
 #include<string.h>
int main() {
    int t,flag;
    printf("enter the test cases:");
    scanf("%d",&t);
    int temp[t];
    char w[t][30];
    printf("enter text ");
    for(int i=0;i<t;i++){    
    scanf(" %[^\n]s",&w[i]);
    int flag=-1;
    int x=strlen(w[i]);
    for(int j=x-2;j>=0;j--){
        for(int k=x-1;k>j;k--){
            if(w[i][k]>w[i][j]){
                int temp=w[i][k];
                w[i][k]=w[i][j];
                w[i][j]=temp;
                flag=j;
                break;
            }
        }
    }
    if(flag!=-1){
    for(int p = flag + 1; p < (x + flag + 1) / 2; p++) 
    { char temp = w[i][p]; 
    w[i][p] = w[i][x - 1 - (p - flag - 1)];
     w[i][x - 1 - (p - flag - 1)] = temp; 
     }
    printf("%s\n",w[i]);
    } 
    else{
        printf("no answer");
    }     
}
}

