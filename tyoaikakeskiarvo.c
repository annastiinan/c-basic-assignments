/*Tee ohjelma, joka laskee tietyn ajanjakson aikana tehtyjen työtuntien määrän
sekä tulostaa tuntien yhteismäärän, keskimääräisen työpäivän pituuden ja
syötetyt tunnit eriteltynä. Ohjelman tulee aluksi kysyä,
kuinka monen työpäivän tiedot syötetään (max. 30 päivää).
Tämän jälkeen ohjelma kysyy päivittäiset työtunnit.
Ohjelman tulostukset tehdään yhden desimaalin tarkkuudella.*/

//30 alkion taulukko

#include <stdio.h>

double taulukko1[31];
double tunnit;
int paivienmaara;
int i;
float kaikki=0;
double keskimaara=0;


int main(void)
{
    printf("Ohjelma laskee yhteen haluamasi ajanjakson aikana tehdyt \n");
    printf("työtunnit sekä keskimääräisen työpäivän pituuden.\n");

    printf("Kuinka monta päivää:");
    scanf("%d", &paivienmaara);
    
    for (i=0; i<paivienmaara; i++) 
    {
        printf("Anna %d. päivän työtunnit: ", i+1);
        scanf("%lf", &tunnit);
        kaikki += tunnit;
        taulukko1[i] = tunnit;
    }
    
    printf("Tehdyt työtunnit yhteensä: %.1lf\n", kaikki);

    keskimaara= ((int)((kaikki / paivienmaara)*10)/10.0);

    printf("Keskimääräinen työpäivän pituus: %.1lf\n", keskimaara);

    printf("Syötetyt tunnit:");

    for (i=0; i<paivienmaara; i++)
    {
        printf("%.1lf", taulukko1[i]);
    }
    return 0;
}


