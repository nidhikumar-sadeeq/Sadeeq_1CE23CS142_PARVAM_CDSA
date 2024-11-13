#include<stdio.h>
int ispre(int n,int a[n],int t)
{
    for(int i=0;i<n;i++)
    {
    if(a[i]==t)
    return 1;
    }

    return 0;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for( int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int t;
    scanf("%d",&t);
    printf("%d",ispre(n,a,t));

}


