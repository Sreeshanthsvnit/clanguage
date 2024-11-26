#include <stdio.h>
int main() {
    int n;
    printf("enter no.of elements:");
    scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   int l=0,r=n,mid,pivot;
   while(l<r){
    mid=(l+r)/2;
    if(arr[mid]>arr[mid+1]){
        pivot=mid+1;
        break;
    }
    if(arr[mid-1]>arr[mid]){
       pivot=mid;
       break;
    }
    
    if(arr[l]>arr[mid]){
        r=mid-1;
    }
    else{
        l=mid+1;
    }

   }
   printf("%d",arr[pivot] );


return 0;
}
