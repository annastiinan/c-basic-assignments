/*Tee yksinkertainen laskinohjelma, joka laskee kahden luvun erotuksen, summan tai tulon.
Ohjelma kysyy ensin mikä laskutoimitus suoritetaan.
Tämän jälkeen ohjelma kysyy luvut, suorittaa laskutoimituksen ja tulostaa saadun tuloksen.
Ohjelman valinta on tehtävä käyttämällä switch()-lausetta.*/

/*1: vähennyslasku
2: yhteenlasku
3: kertolasku
Valitse toiminto:3
Anna eka luku:3
Anna toka luku:54
3*54=162*/

#include<stdio.h>

int main()
{
    int summa;
    int erotus;
    int tulo;
    int vastaus;
    int numero;
    int numero2;

    summa = numero + numero2;
    erotus = numero - numero2;
    tulo = numero * numero2;


printf (" 1: vähennyslasku\n 2: yhteenlasku\n 3: kertolasku\n");

printf ("Valitse toiminto:");
scanf("%d", &vastaus);

switch (vastaus)
{
case 1:
    { 
        printf("Anna eka luku:");
        scanf("%d",&numero);
        printf("Anna toka luku:");
        scanf("%d", &numero2);

     summa = numero + numero2;
    erotus = numero - numero2;
    tulo = numero * numero2;


        printf("%d-%d=%d", numero, numero2, erotus);
        break;
    }

case 2:
    {
        printf("Anna eka luku:");
        scanf("%d", &numero);
        printf("Anna toka luku:");
        scanf("%d", &numero2);

        summa = numero + numero2;
    erotus = numero - numero2;
    tulo = numero * numero2;


        printf("%d+%d=%d", numero, numero2, summa);
        break;
    }

case 3:
    {
        printf("Anna eka luku:");
        scanf("%d", &numero);
        printf("Anna toka luku:");
        scanf("%d", &numero2);
    
     summa = numero + numero2;
    erotus = numero - numero2;
    tulo = numero * numero2;

    

        printf("%d*%d=%d", numero, numero2, tulo);
        break;
    }
    

default:
     printf("Antamasi syöte on arvoalueen ulkopuolella.");
         break;
}


return 0;

}