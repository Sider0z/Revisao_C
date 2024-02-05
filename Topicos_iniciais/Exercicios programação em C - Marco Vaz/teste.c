#include <stdio.h>


int main(){


    int fat=5;
    int aux = fat - 1;

    for(aux; aux>=1; aux--){

        fat = aux * fat;


    }

    printf("%d", fat);

}