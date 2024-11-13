#include<stdio.h>
void add()
{
    static int a=6;
    a++;
    printf("%d ",a);

}
int main()
{
    add();
    add();
}