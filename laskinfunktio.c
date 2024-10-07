

#include <stdio.h>

void summa(void);
void erotus(void);
void tulo(void);

  int valinta;
  int luku1;
  int luku2;
  int summa1;
  int erotus1;
  int tulo1;

int main(void)
{
 
  do{

    printf("1:kahden luvun summa\n2:kahden luvun erotus\n3:kahden luvun tulo\n");
    printf("<0: ohjelman lopetus \n");
    printf("Valitse laskutoimitus:");
    scanf("%d", &valinta);
    if(valinta < 0) {
      printf("Ohjelma lopetetaan...");
    }
    else if(valinta == 1) {
      summa();
    }
    else if(valinta == 2) {
      erotus();
    }
    else if(valinta == 3) {
      tulo();
    }
    else {
      printf("Antamasi luku ei kelpaa.\n\n");
    }
  }while(valinta>0);
  return 0;
}

void summa(void) {
    printf("Syötä ensimmäinen luku:");
    scanf("%d", &luku1);
    printf("Syötä toinen luku:");
    scanf("%d", &luku2);

    summa1=luku1+luku2;
    printf("%d+%d=%d\n", luku1,luku2,summa1);

}

void erotus(void) {
    printf("Syötä ensimmäinen luku:");
    scanf("%d", &luku1);
    printf("Syötä toinen luku:");
    scanf("%d", &luku2);

    erotus1=luku1-luku2;
    printf("%d-%d=%d\n", luku1, luku2, erotus1);
}

void tulo(void) {
    printf("Syötä ensimmäinen luku:");
    scanf("%d", &luku1);
    printf("Syötä toinen luku:");
    scanf("%d", &luku2);

    tulo1=luku1*luku2;
    printf("%d*%d=%d\n", luku1,luku2,tulo1);
}
