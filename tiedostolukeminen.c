/*Tiedostossa "luvut.s" on 4 kokonaislukua.
Luvut ovat tiedoston ensimmäisellä rivillä välilyönnein eroteltuna.
Tee ohjelma, joka lukee tiedostosta kokonaisluvut ja laskee näiden summan.
Lopuksi ohjelma tulostaa sekä luvut että summan näytölle.*/

/*Tiedostosta luvut.s löytyneet luvut:
445, 26, 45 ja 43

Lukujen summa: 559*/

#include <stdio.h>
int main ()
{
    FILE *avaus;
   avaus=fopen("luvut.s", "r");
  
    int luku1;
    int luku2;
    int luku3;
    int luku4;
    int summa=0;

    if((avaus = fopen("luvut.s", "r")) == NULL) {
        printf("Tiedostoa ei löydetty!");
        return 0;
    } else {
        fscanf(avaus, "%d %d %d %d ", &luku1, &luku2, &luku3, &luku4);
		fclose(avaus);
        summa=luku1+luku2+luku3+luku4;

            printf("Tiedostosta luvut.s löytyneet luvut:\n %d, %d, %d ja %d\n", luku1, luku2, luku3, luku4);
            printf("\nLukujen summa: %d", summa);

    }
    return 0;
}