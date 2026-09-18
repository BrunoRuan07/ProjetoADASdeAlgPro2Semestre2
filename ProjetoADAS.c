#include <stdio.h>
#include <stdlib.h>
#define MAX_AMOSTRAS (100)

float aleatorio (float minimo, float maximo);

void registrar_50(
    float velocidade[MAX_AMOSTRAS][2], 
    float sensores_frontais[MAX_AMOSTRAS][3], 
    float sensores_laterais[MAX_AMOSTRAS][2]
);


int main(){

    float velocidade[MAX_AMOSTRAS][2], 
    sensores_frontais[MAX_AMOSTRAS][3], 
    sensores_laterais[MAX_AMOSTRAS][2], 
    processamento[MAX_AMOSTRAS][2], 
    atrito;

    int status[MAX_AMOSTRAS][3], 
    sensibilidade, 
    qnt_amostras = 0, opcao;

    return 0;
}

float aleatorio(float minimo, float maximo){

    float numero0e1 = (float) rand() / RAND_MAX;
    float numero = minimo + numero0e1 * (maximo - minimo);

    return numero;
}

void registrar_50(float velocidade[MAX_AMOSTRAS][2], 
    float sensores_frontais[MAX_AMOSTRAS][3], 
    float sensores_laterais[MAX_AMOSTRAS][2]){

    for (int i = 0; i < 50; i++){

        velocidade[i][0] = aleatorio(10.0f, 200.0f); // em km/h.
        velocidade[i][1] = aleatorio(10.0f, 200.0f);

        sensores_frontais[i][0] = aleatorio(10.0f, 300.0f);
        sensores_frontais[i][1] = aleatorio(10.0f, 300.0f); // em cm.
        sensores_frontais[i][2] = aleatorio(10.0f, 300.0f);

        sensores_laterais[i][0] = aleatorio(10.0f, 100.0f);
        sensores_laterais[i][1] = aleatorio(10.0f, 100.0f); // em cm.
        
    }
}