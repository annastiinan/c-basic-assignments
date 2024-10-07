#include <stdio.h>

int suurin(int v1, int v2,int v3);
int pienin(int v1, int v2,int v3);

int main()
{

int v1,v2,v3;

printf("Anna 1. luku:");
scanf("%d",&v1);

printf("Anna 2. luku:");
scanf("%d",&v2);

printf("Anna 3. luku:");
scanf("%d",&v3);

int p = pienin(v1, v2, v3);
printf("Syöttämistäsi luvuista suurin oli %d ja pienin %d. \n", suurin(v1, v2, v3),p);

return 0;
}

int suurin(int v1, int v2,int v3)
{
 int suurin;
 suurin = v1;
 if (v2 > suurin) {
   suurin = v2;
 }
if (v3 > suurin){
   suurin = v3;
 }
 return suurin;
}

int pienin(int v1, int v2,int v3)
{
 int pienin;
 pienin = v1;
 if (v2 < pienin) {
   pienin = v2;
 }
  if (v3 < pienin){
   pienin = v3;
 }
 return pienin;
}