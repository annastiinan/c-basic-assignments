

#include <stdio.h>

int main()
{
    int matriisi[5][5] =
{4, 6, 25, 88, 5,
34, 5, 300, 4, 65,
78, 43, 11, 90, 125,
98, 585, 12, 63, 21,
45, 35, 9, 5, 1};

int summalaskuri=0;
int x=0;
int y=0;

printf("Taulukon:\n");

for(x=0; x<5; x++) {
    for(y=0; y<5; y++){

        if (y==4)
        {
            printf("%d \n", matriisi[x][y]);
        }
        else{
            printf("%d ", matriisi[x][y]);
        }
                summalaskuri+=matriisi[x][y];
    }   
}
printf("\n\nalkioiden summa on %d\n", summalaskuri);

return 0;
}
