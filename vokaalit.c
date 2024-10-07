

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
