#include <stdio.h>
struct Aluno{
    int ra;
    char nome[51];
    double nota;
};
void imprimir(struct Aluno aluno);
void ler(struct Aluno * ptr_aluno);
int main() {
    struct Aluno aluno1, aluno2;

    ler(&aluno1);
    printf("Proximo aluno \n");
    ler(&aluno2);
    printf("\n\nImprimindo os dados\n");
    imprimir(aluno1);
    imprimir(aluno2);

    return 0;
}
void imprimir(struct Aluno aluno){
    printf("Ra do Aluno: %d\n" , aluno.ra);
    printf("Nome do Aluno: %s \n", aluno.nome);
    printf("Nota do aluno: %.2lf \n", aluno.nota);
}
void ler(struct Aluno * ptr_aluno){
    printf("Digite o ra do aluno\n");
    scanf("%d", &ptr_aluno->ra);
    fflush(stdin);
    printf("Digite o nome do aluno\n");
    gets(ptr_aluno->nome);
    printf("Digite a nota do aluno\n");
    scanf("%lf", &ptr_aluno->nota);
}
