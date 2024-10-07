       #include<stdio.h>
       
       int main(void)
       {
         FILE *tied_kahv;
         float luettu_luku;
       
         if((tied_kahv = fopen("data.txt", "r")) == NULL) {
           printf("Tiedostoa ei löydetty!"); return 0;
        } else {
          fscanf(tied_kahv, "%f", &luettu_luku); 
          fclose(tied_kahv);
        
          printf("Tiedostosta löytyi luku %f", luettu_luku);
        }
       return 0;
       }