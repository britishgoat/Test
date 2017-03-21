#define _XOPEN_SOURCE
#include <unistd.h>
#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(int argc, string B[])
{
    //check if the argument is unique
    if(argc!=2)
        return 1;
    //string to put crypted values
    string x;
    char D[6]={};
    //For loops to Obtain all uper and lowercase strings in D
     for(int i=65; i<123; i++)
    {
        D[0]=(char)i;
        x=crypt(D, "50");
        if(strcmp(B[1], x)==0)
        {
            printf("%s \n", D);
            return 0;
        }
        if(i==90)
            i+=6;
    }
// sjod 22222222222222222222222222
     for(int i=65; i<123; i++)
    {
        for(int j=65; j<123; j++)
        {
            D[0]=(char)i;
            D[1]=(char)j;
            x=crypt(D, "50");
            if(strcmp(B[1], x)==0)
            {
                printf("%s \n", D);
                return 0;
            }
            if(j==90)
                j+=6;
        }
        if(i==90)
            i+=6;
    }
// Here starts the three 333333333333333333333333333333333333333333333333333333333333333333
    for(int i=65; i<123; i++)
    {
        for(int j=65; j<123; j++)
        {
            for(int k=65; k<123; k++)
            {
                D[0]=(char)i;
                D[1]=(char)j;
                D[2]=(char)k;
                x=crypt(D, "50");
                if(strcmp(B[1], x)==0)
                {
                    printf("%s \n", D);
                    return 0;
                }
                if(k==90)
                    k+=6;
            }
            if(j==90)
                j+=6;
        }
        if(i==90)
            i+=6;
    }
// 4 lettered 444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444
    for(int i=65; i<123; i++)
    {
        for(int j=65; j<123; j++)
        {
            for(int k=65; k<123; k++)
            {
                for(int l=65; l<123; l++)
                {
                    D[0]=(char)i;
                    D[1]=(char)j;
                    D[2]=(char)k;
                    D[3]=(char)l;
                    x=crypt(D, "50");
                    if(strcmp(B[1], x)==0)
                    {
                        printf("%s \n", D);
                        return 0;
                    }
                    if(l==90)
                        l+=6;
                }
                if(k==90)
                    k+=6;
            }
            if(j==90)
                j+=6;
        }
        if(i==90)
            i+=6;
    }
}
