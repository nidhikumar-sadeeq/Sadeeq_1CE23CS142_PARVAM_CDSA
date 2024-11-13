#include<stdio.h>
int main(){
    int n;
    printf("Enter the no. of element");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    for (int j=0;j<k;j++){
        int temp=arr[n-1];
        for(int i=n-1;i>0;i--){
            arr[i]=arr[i-1];
        }arr[0]=temp;
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}