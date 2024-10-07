      #include <stdio.h> 
       int main(void)  
       {  
         FILE *avaus = fopen("tiedosto.txt", "w");  
           fprintf(avaus, "Esa"); 
         fclose(avaus);  
        return 0;  
       }