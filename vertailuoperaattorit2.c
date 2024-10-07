#include <stdio.h>

int main()
{
    char t;
    char k;
    char vastaus;
    int luku;
    int luku2;
    int luku3;

    printf("Juotko kahvia vai teetä (k/t)?");
    vastaus = getchar();
    getchar();

      if (vastaus=='k')
      { printf("Montako kuppia juot päivässä:");
        scanf("%d", &luku);

        if (luku>=0 && luku<=2)
           printf("Et taida juoda paljoa kahvia.");
        
        else if (luku>=3 && luku<=20)
           printf("Juotpa paljon kahvia!");
        
        else printf("Ohjelmassa tapahtunut virhe!");
      }

      else if (vastaus=='t')
      { printf("Montako kuppia juot päivässä:");
        scanf("%d", &luku2);

        if (luku2>=0 && luku2<=2)
           printf("Et taida juoda paljoa teetä.");
        
        else if (luku2>=3 && luku2<=20)
            printf("Juotpa paljon teetä!");

        else printf("Ohjelmassa tapahtunut virhe!");    
      }

     else
     { printf("Montako kuppia juot päivässä:");
       scanf("%d", &luku3);

       if (vastaus!='k' || vastaus!='t' && luku3>=0 || luku3<=0)
		   printf("Ohjelmassa tapahtunut virhe!");
          }
     




    return 0;
}