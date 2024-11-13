#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    
    int a[n];  
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(int i=0;i<n;i++)
    {
        int j=i-1;
        int temp=a[i];
        while(j>=0 && temp<a[j]){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);  
    }
    
   return 0;
}