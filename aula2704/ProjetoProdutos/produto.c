#include "produto.h"
#include <stdio.h>
#include <stdlib.h>

void inicializar(){
    for (int i = 0; i < MAX; ++i) {
        vetor[i] = NULL;
    }
}

void cadastrar(int pos){
    if(vetor[pos]==NULL){
        vetor[pos] = (ptr_produto) malloc(sizeof (produto));
        printf("Digite o código do produto: \n");
        scanf("%d", &vetor[pos]->codigo);
        fflush(stdin);
        printf("Digite a descrição do produto: \n");
        gets(vetor[pos]->descricao);
        printf("Digite o preço do produto: \n");
        scanf("%lf", &vetor[pos]->preco);
        vetor[pos]->qtd_estoque = 0;
        printf("Produto cadastrado com sucesso....\n");
    }
}

void listarUnico(int codigo){
    for (int i = 0; i < MAX; ++i) {
        if(vetor[i] != NULL){
            if(vetor[i]->codigo == codigo){
                printf("Dados cadastrados: \n");
                printf("Cod. Produto: %d \n", vetor[i]->codigo);
                printf("Desc. Produto: %s \n", vetor[i]->descricao);
                printf("Preço do Produot: %.2lf \n", vetor[i]->preco);
                printf("Quantidade em estoque: %d \n", vetor[i]->qtd_estoque);
                return;
            }
        }
    }
    printf("Código do produto não encontrado\n");
}

void listar(){
    for (int i = 0; i < MAX; ++i) {
        if(vetor[i] != NULL){
            printf("Dados cadastrados: \n");
            printf("Cod. Produto: %d \n", vetor[i]->codigo);
            printf("Desc. Produto: %s \n", vetor[i]->descricao);
            printf("Preço do Produot: %.2lf \n", vetor[i]->preco);
            printf("Quantidade em estoque: %d \n", vetor[i]->qtd_estoque);
            printf("-----------------------\n");
        }
    }
}

void comprar(int codigo, int qtd){
    for (int i = 0; i < MAX; ++i) {
        if(vetor[i] != NULL){
            if(vetor[i]->codigo == codigo){
                 vetor[i]->qtd_estoque += qtd;
                return;
            }
        }
    }
    printf("Produto nao encontrado\n");
}

void vender(int codigo, int qtd){
    for (int i = 0; i < MAX; ++i) {
        if(vetor[i] != NULL){
            if(vetor[i]->codigo == codigo){
                vetor[i]->qtd_estoque -= qtd;
                return;
            }
        }
    }
    printf("Produto nao encontrado\n");
}