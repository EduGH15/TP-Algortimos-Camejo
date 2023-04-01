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
        printf("¿Qué queso querés en tu chambuchito? Dambo[D], Cheddar[C], Gruyere[G], Sin Queso[S]:\n");
        scanf(" %c", queso);
    }
}

void preguntar_tipo_proteina(char* proteina){
    while(*proteina != 'R' && *proteina != 'A' && *proteina != 'S' && *proteina != 'P' && *proteina != 'N'){
        printf("¿Qué proteina querés en tu chambuchito? Las opciones son Roast Beef[R], Atún[A], Soja[S], Pollito[P], Nada de Prote[N]:\n");
        scanf(" %c", proteina);
    }
}

void preguntar_si_calienta_comida(char* calentar){
    while(*calentar != 'S' && *calentar != 'N'){
        printf("¿Deseás tu chambuchito caliente? Las opciones son Si[S] o No[N]:\n");
        scanf(" %c", calentar);
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
    preguntar_tipo_proteina(&proteina);
    if(proteina != 'A'){
        preguntar_si_calienta_comida(&calentar);
    }
    /*printf("%i, %c, %c, %c, %c\n", medida, pan, queso, proteina, calentar);*/
    
    
    return 0;
}