

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
