#include<stdio.h>
int main()
{
    int taka;
    scanf("%d",&taka);
    if(taka>=100)
    {
        printf("Eat Burger");
    }
    else if(taka>=50)
    {
        printf("Eat Fuska");
    }
    else if(taka>=20)
    {
        printf("Eat Ice cream");
    }
    else
    {
        printf("Nothing to Eat");
    }
    return 0;
}