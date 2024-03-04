#include <stdio.h>

int main() {
    //Receber nome de dois alunos
    char aluno[2][51];
    for (int i = 0; i < 2; ++i) {
        fflush(stdin);
        printf("Digite o nome do aluno %d \n", i+1);
        scanf("%[^\n]", aluno[i]);
    }
    for (int i = 0; i < 2; ++i) {
        printf("Nome %s \n", aluno[i]);
    }
    return 0;
}
