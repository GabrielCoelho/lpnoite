#include <stdio.h>
#include "produto.h"


ptr_produto vetor[MAX];
int main() {

    int opcao = 0;
    inicializar(); //iniciar o vetor de ponteiros
    int pos =0;
    int codigoProcurado=0;
    int quantidade=0;
    do{
        printf("Menu Principal  - Cadastro Produtos \n");
        printf("1. Cadastrar Produto \n");
        printf("2. Listar Produtos \n");
        printf("3. Mostrar um Produto \n");
        printf("4. Comprar Produto \n");
        printf("5. Vender Produto \n");
        printf("9. Sair do Programa \n");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                cadastrar(pos);
                pos++;
                break;
            case 2:
                listar();
                break;
            case 3:
                printf("Digite o codigo do produto a ser exibido: \n");
                scanf("%d", &codigoProcurado);
                listarUnico(codigoProcurado);
                break;
            case 4:
                printf("Digite o codigo do produto a ser comprado: \n");
                scanf("%d", &codigoProcurado);
                printf("Quantidade comprada: \n");
                scanf("%d", &quantidade);
                comprar(codigoProcurado, quantidade);
                break;
            case 5:
                printf("Digite o codigo do produto a ser vendido: \n");
                scanf("%d", &codigoProcurado);
                printf("Quantidade vendida: \n");
                scanf("%d", &quantidade);
                vender(codigoProcurado, quantidade);
                break;
            case 9:
                printf("Fim do Programa\n");
                break;
            default:
                printf("Opção inválida\n");
        }
    }while(opcao != 9);
    return 0;
}
