#omar tahirou yaro

#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int n ;
    int zongou=500;
    int weygou=250;
    int weytatchi=200;
    int waranka=100;
    int dalawey=50;
    int dalagou=25;
    int dalahinka=10;
    int dala=5;

    do
    {
        n = get_int ("Montant: ");
    }
    while (n<0);
    int counter=0;

    while(n>=zongou)
    {
        n=n-zongou;
        counter++;
    }

    while(n>=weygou)
    {
        n=n-weygou;
        counter++;
    }

    while(n>=weytatchi)
    {
        n=n-weytatchi;
        counter++;
    }

    while(n>=waranka)
    {
        n=n-waranka;
        counter++;
    }

    while(n>=dalawey)
    {
        n=n-dalawey;
        counter++;
    }

    while(n>=dalagou)
    {
        n=n-dalagou;
        counter++;
    }

    while(n>=dalahinka)
    {
        n=n-dalahinka;
        counter++;
    }

    while(n>=dala)
    {
        n=n-dala;
        counter++;
    }
    printf("Nombre de piece: %i",counter);
}