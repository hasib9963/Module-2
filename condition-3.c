#include<stdio.h>
int main()
{
    int taka;
    scanf("%d",&taka);
    if(taka>=5000)
    {
      printf("Go Cox's bazar\n");
      if(taka>=10000)
      {
        printf("Go Saint Martin\n");
      }
      else
      {
        printf("go back\n");
      }
    }
    else
    {
        printf("don't go anywhere");
    }
    return 0;
}