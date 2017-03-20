#include<stdio.h>
#include<cs50.h>
#include<math.h>


int maxsize(n)
    {
    int x=0;
    for(int i=1; 1; i++)
        {
        x++;
        if((pow(2,i)-1)>=n)
            {
            break;
            }
        }
        return x;
    }

int main(void)
{
int n=GetInt();
int k=maxsize(n);
int b[k];
int t;
for(int i=(k-1); 0<=i; i--)
    {
    t=0;
    int f=pow(2,i);
    if(n>=f)
        {
         while(n>=f)
            {
            n=n-f;
            t++;
            }
        b[(k-i-1)]=t;
        }
    else
        {
        b[(k-i-1)]=0;
        }
    printf("\n %d \n", b[(k-i-1)]);
    }
}