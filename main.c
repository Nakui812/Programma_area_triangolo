#include <stdio.h>

int main(void) {
    float base,altezza,area;
    printf("inserisci il valore della base  : \n");
    scanf("%f",&base);
    printf("inserisci il valore dell' altezza : \n");
    scanf("%f",&altezza);
    area=base*altezza/2;
    printf("il valore dell' area e'  :  %f \n",area);
}