#include<stdio.h>
void ispre(int n,int arr[n],int target){
    int left=0,right=n-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(arr[mid]==target){
            return mid;

        }
        else if(target<arr[mid]){
            right=mid-1;

        }
        else{
            left=mid+1;

        }
    }
    return -1;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int target;
        scanf("%d",&target);
        printf("%d",ispre(n,arr[n],target));
    }

