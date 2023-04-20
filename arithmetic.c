#include<stdio.h>
int main()
{
    int a=10,b=20,c=3;
    int sum = a+b;
    int minus = b-a;
    int multi = a*b;
    int divi = b/a;
    float dvd = b*1.0/c;
    // b*1.0 converts interger into float.
    int mod = b%c;
    printf("%d\n%d\n%d\n%d\n%f\n%d",sum,minus,multi,divi,dvd,mod);
    return 0;
}