/*Tee ohjelma, joka kysyy käyttäjältä jonkin sanan (max. 15 pientä kirjainta)
ja laskee sanassa esiintyvien vokaalien (a, e, i, o, u, y) määrän. 
Vihje:
Olet aikaisemmin oppinut vertaamaan,
 onko jonkin merkkimuuttujan arvo vaikkapa "a". 
 Merkkijonotaulukon yksittäisiin kirjaimiin voit viitata indeksin avulla. 
 (char[] = "sana"; sana[1] == 'a';)*/

 /*Ohjelma laskee vokaalien määriä.
Anna sana:testi
Sanassa vokaaleja: 2*/

#include <stdio.h>
int main(void)
{
    char sana[16];
    int vokaalit=0;
    int i=0;

    printf("Ohjelma laskee vokaalien määriä.\n");
    printf("Anna sana: ");
    scanf("%s", sana);

    while (sana[i] !=0) {
        switch (sana[i]) {
            case 'a' : case 'e' : case 'i': 
            case 'o' : case 'u' : case 'y' : 
            case 'å' : case 'ä' : case 'ö' :
                vokaalit++;
        }
        i++;
    }
    printf("Sanassa vokaaleja: %i", vokaalit);

return 0;
}