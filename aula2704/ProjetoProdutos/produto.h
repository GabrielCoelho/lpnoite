#define MAX 100
typedef struct Produto{
    int codigo;
    char descricao[51];
    double preco;
    int qtd_estoque;
}produto;
typedef produto *ptr_produto;
extern ptr_produto vetor[MAX];



void inicializar();

void cadastrar(int pos);

void listarUnico(int codigo);

void listar();

void comprar(int codigo, int qtd);

void vender(int codigo, int qtd);
