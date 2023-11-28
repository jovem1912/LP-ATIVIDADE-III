#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int NUMERO[5];
    int i;
    int IMPAR=0;
    int PAR=0;
    int QNTNEGATIVOS=0;
    int MAIOR=0;
    int MENOR=9999;
    int SOMAPAR=0;
    int SOMANUMEROS=0;
    float MEDIAPAR=0;
    float MEDIANUMEROS=0;

    for (i = 0; i < 5; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &NUMERO[i]);
        system ("cls || clear");

        if (NUMERO[i] % 2 == 0) {
            PAR++;
            SOMAPAR+=NUMERO[i];
        }else{
            IMPAR++;
        } 

        if (NUMERO[i] < 0) {
            QNTNEGATIVOS++;
        }
        
        SOMANUMEROS+=NUMERO[i];
        
        MAIOR = NUMERO[i] > MAIOR ? NUMERO[i] : MAIOR;
        MENOR = NUMERO[i] < MENOR ? NUMERO[i] : MENOR;

    }

        MEDIANUMEROS = SOMANUMEROS / i;
            
        if (PAR > 0) {
        MEDIAPAR = SOMAPAR /  PAR; 
       }
        
        printf("Quantidade de números ímpares: %d \n", IMPAR);
        printf("Quantidade de números negativos: %d \n", QNTNEGATIVOS);
        printf("Maior número: %d \n", MAIOR);
        printf("Menor número: %d \n", MAIOR);
        printf("Média números pares: %.1f \n", MEDIAPAR);
        printf("Média números total: %.1f \n", MEDIANUMEROS);


    return 0;


    }