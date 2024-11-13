#include<stdio.h>
#include<string.h>
int even(char n[20])
{
     

     printf("even\n");

    for(int i=0;i<=n[i];i++)
{
    if(n[i]>=65 && n[i]<=90)
{

    printf("%c",n[i]+32);
}
}
}
int odd(char n[20]){
       

     printf("odd\n");
        for(int i=0;i<=n[i];i++)
{
    if(n[i]>=97 && n[i]<=122)
    {
        printf("%c",n[i]-32);
    }
        
    }
}

int main()
{
    char n[20];
int a,s=0,x;
    scanf("%s",n);
    int count=strlen(n);
         printf("%d\n",count);
    if(count%2==0)
   {
    printf("%d",even(n));
   }
   else
   {
      printf("%d",odd(n));
   }
   
   for(int i=0;i<n[i];i++)
   {
    a=n[i]+n[i+1];
    printf("\n");

   }
       printf("%d  ",a);
       while(a!=0)
       {
        x=a%10;
        s+=x;
 }
 printf("%d",s);
 while(s<=3)
 {
       switch(s)
       {
        case 1:printf("intelligent\n");
        break;
        case 2:
        printf("dumb");
        break;
        case 3:printf("Fool");
        break;
       }
    }
}

