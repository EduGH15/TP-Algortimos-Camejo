#include <stdio.h>

const float PRECIO_BASICO = 5, PRECIO_ESPECIAL = 8, PRECIO_ROAST = 7, PRECIO_ATUN = 9, PRECIO_POLLO = 5, PRECIO_SOJA = 3;

void preguntar_medida_sandwich(float* medida){
    while(*medida < 15 || *medida > 30){
        printf("¿De que medida desea su chambuchito? Ingrese un número entre el 15 y el 30 (inclusives):\n");
        scanf("%f", medida);
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

void asignar_precio(char producto, float* precio){
    switch(producto){
        case 'B':
        case 'I':
        case 'D':
        case 'C':
            *precio += PRECIO_BASICO;
            break;
        case 'A':
        case 'Q':
        case 'G':
            *precio += PRECIO_ESPECIAL;
            break;
    }
}

void asignar_precio_proteina(char producto, float* precio){
    switch(producto){
        case 'R':
            *precio += PRECIO_ROAST;
            break;
        case 'A':
            *precio += PRECIO_ATUN;
            break;
        case 'P':
            *precio += PRECIO_POLLO;
            break;
        case 'S':
            *precio += PRECIO_SOJA;
            break;
    }
}

int main(){
    float medida = 0, precio = 0, precio_total = 0;
    char pan = ' ', queso = ' ', proteina = ' ', calentar = ' ';

    preguntar_medida_sandwich(&medida);

    preguntar_tipo_pan(&pan);
    asignar_precio(pan, &precio);

    preguntar_tipo_queso(&queso);
    asignar_precio(queso, &precio);
   
    preguntar_tipo_proteina(&proteina);
    asignar_precio_proteina(proteina, &precio);
   
    if(proteina != 'A'){
        preguntar_si_calienta_comida(&calentar);
    }

    precio_total = precio * (0.3 * medida);
    printf("%f", precio_total);
   
}