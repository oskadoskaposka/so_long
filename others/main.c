#include "main.h"


int main (void)
{
    tp_fruta fruta;

    fruta.banana = 10;
    fruta.pera = 11;
    // fruta.maca = 12;    

    printf("valor da banana %d \n", fruta.banana);
    printf("valor da pera %d \n", fruta.pera);
    printf("valor da maca %d \n", fruta.maca);
    printf("tamanho struct %lu \n", sizeof(fruta));
    printf("\n");
    printf("tamanho char %lu \n", sizeof(char));
    printf("tamanho char* %lu \n", sizeof(char*));
    printf("tamanho int %lu \n", sizeof(int));
    printf("\n");
    printf("tamanho tp_fruta %lu \n", sizeof(tp_fruta));
    

    return (0);

}