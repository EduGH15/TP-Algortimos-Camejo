#include <stdio.h>

void preguntar_medida_sandwich(int* medida){
    while(*medida < 15 || *medida > 30){
        printf("¿De que medida desea su chambuchito? Ingrese un número entre el 15 y el 30 (inclusives):\n");
        scanf("%i", medida);
    }
}

void preguntar_tipo_pan(char* pan){
    while(*pan != 'B' && *pan != 'I' && *pan != 'A' && *pan != 'Q'){
        printf("¿Qué pan desea en su chambuchito? Pan Blaco [B], Pan Integral[I], Avena y Miel[A], Queso y Orégano[Q]:\n");
        scanf(" %c", pan);
    }
} 

void preguntar_tipo_queso(char* queso){
    while(*queso != 'D' && *queso != 'C' && *queso != 'G' && *queso != 'S'){
        printf("¿Qué queso querés en tu chambuchito? Dambo[D], Cheddar[C], Gruyere[G], Sin Queso[S]\n");
        scanf(" %c", queso);
    }
}

int main(){
    int medida = 0;
    char pan = ' ';
    char queso = ' ';
    char proteina = ' ';
    char calentar = ' ';
    int precio_total = 0;

    preguntar_medida_sandwich(&medida);
    preguntar_tipo_pan(&pan);
    preguntar_tipo_queso(&queso);
    
    return 0;
}