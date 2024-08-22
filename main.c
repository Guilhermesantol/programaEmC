#include <stdio.h>

int main(void){
    int idade;
    short idadeO;
    short soma;
    idade = 30;
    idadeO = 23;
    soma = idade + idadeO;

    printf("somando as idades(idade e idadeO) teremos a idade do colega lowell que e %d \n", soma);
    printf("\n");
    //soma
    //subtração
    double num1, num2;
    float subtracao;
    num1 = 85;
    num2 = 68;
    subtracao = num1 - num2;

    printf("subtraindo a idade de meu vo (85) com a idade de alguma pessoa que tenha 68 anos encontra a idade que o colega lowell aparenta ter sem barba %.0f\n", subtracao);
    printf("\n");


    //codigo ASCII
    char ch = 'A';
    int asciiValue = (int) ch;
    printf("O codigo ASCII de %c e %d\n", ch, asciiValue);

    printf("\n");
    
    //multiplicacao
    long multiplicacao;
    multiplicacao = num1 * num2;
    printf("pegando o numero 85, 68 e a variavel 'multiplicacao' tadan multiplica\n");
    printf("%d", multiplicacao);
    printf("\n");


    //array
    int guardado[5] = {1,20,67,77,05};
    printf("a lista de inteiros contem os numeros: ");
    for (int i = 0; i <= 4 ; i++){
        printf("%d ", guardado[i]);
       
    }
    printf("\n");
    float guardado2[3] = {1.24,2.42,6.27};
    printf("a lista de floats contem: ");
    for (int i = 0; i <= 2 ; i++){
        printf("%.2f  ", guardado2[i]);
    }
    //estrutura
    struct livro{
        char titulo[100];
        char autor[112];
        int pagina;
    };
    struct livro book = {"acao e aventura", "takamassa nomuro", 100};
    printf("\no livro %s escrito por %s tendo %d paginas", book.titulo, book.autor, book.pagina);
    printf("\n");

    //array struct
    struct livro caderno[2] = {
        {"naruto", "masacachi nomotto", 88 },
        {"dragonball", "akirama toriama", 92 },
    };
    printf("o manga %s do autor %s com %d \n", caderno[0].titulo, caderno[0].autor, caderno[0].pagina);
    printf("o manga %s do autor %s com %d paginas", caderno[1].titulo, caderno[1].autor, caderno[1].pagina);
   
       
    
}


