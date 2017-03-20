#include<stdlib.h>
#include<stdio.h>
#include<cs50.h>
#include<time.h>


int main(void)
{
    srand((unsigned)time(NULL));
    int x;
    int y;
    int p=0;
    for(int i=0; i<30; i++)
    {
        printf("Presione enter para tirar los dados:");
        while(1)
        {
            y=getchar();
            break;
        }   
        x=((rand()%6)+(rand()%6)+2);
        printf("Los dados dan %d \n", x);
        if (x==7 || x==11)
        {
            printf("Ganador!!! \n");
            break;
        }
        if (x==2||x==3||x==12)
        {
            printf("Perdedor... \n");
            break;
        }
        if (x%4==0||x%5==0||x==6||x==9)
        {
            p+=1;
            printf("Puntuacion: %d. \n", p);
        }
        if (p==7)
        {
            printf("Perdedor... \n");
            break;
        }
        if (x==p)
        {
            printf("Ganador!!! \n");
            break;
        }
    }
}
