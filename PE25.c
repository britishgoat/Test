#include<stdio.h>
#include<cs50.h>
#include<math.h>



long f(int n)
{
     int x=((pow(((1+sqrt(5))/2),n)-pow(((1-sqrt(5))/2),n))/sqrt(5));
     return x;
}

int main(void)
{
    int n=GetInt();
    long x=f(n);
    printf("%ld",x);
}