#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int OPCAO;
    int i;
    int CONTADOR = 0;
    char NOMEPRODUTO[999][200];
    int QUANTIDADE[200];
    float VALORPRODUTO[200];

    do
    {
        printf("--- LOJA --- \n");
        printf("1  -  Adicionar venda\n");
        printf("2  -  Exibir total de vendas\n");
        printf("Escolha a opção desejada: ");
        scanf("%d", &OPCAO);

        fflush(stdin);

        system("cls || clear");

        switch (OPCAO)
        {
        case 1:

            printf("Digite  o nome do produto: ");
            gets(NOMEPRODUTO[CONTADOR]);

            fflush(stdin);

            printf("Digite o valor do produto: ");
            scanf("%f", &VALORPRODUTO[CONTADOR]);

            printf("Digite a quantidade do produto: ");
            scanf("%d", &QUANTIDADE[CONTADOR]);

            CONTADOR++;

            system("cls || clear");

            break;
        case 2:

            for (i = 0; i < CONTADOR; i++)
            {

                printf("%dº vendas\n", i + 1);
                printf("Produtos: %s\n", NOMEPRODUTO[i]);
                printf("Valor dos produtos: %.2f\n", VALORPRODUTO[i]);
                printf("Quantidade: %d\n", QUANTIDADE[i]);
                printf("\n");
            }
            break;

        default:
            printf("Opção inválida!\n");
            break;
        }
    } while (OPCAO != 2);

    return 0;
}