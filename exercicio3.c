#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int N;
    char nome[999][200];
    char numeroTelefone[999][200];
    int i;
    int Salvo = 0;

    do
    {
        printf("1 - salvar novo numero. \n");
        printf("2 - exibir os numeros salvos. \n");
        printf("\ndigite a opção ");
        scanf("%d",&N);
        printf("\n");

        fflush(stdin);

        switch (N)
        {

        case 1:

            printf("digite o nome do contato: ");
            gets(nome[Salvo]);

            printf("digite o numero do whatsapp: ");
            gets(numeroTelefone[Salvo]);

            Salvo++;
            break;

        case 2:

            for (i = 0; i < Salvo; i++)
            {

                printf("nome do contato: %s \n", nome[i]);
                printf("numero do whatsapp: %s \n", numeroTelefone[i]);
                printf("\n");
            }

            break;

        default:
            printf("opção invalida. \n");
            break;
        }

    } while (N != 2);

    return 0;
}