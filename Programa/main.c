#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    char senha[11];
    int pontuacao = 0, tamanho;

    setlocale(LC_ALL, "");

    //verifica se a senha digitada é menor que 10
    do {
        printf("Digite a sua senha: ");
        gets(senha);

        if (GetTamanho(senha)>10) {
            system("cls");
            printf("Senha muito grande! Digite novamente\n");
        } else break;
    }while(1);

    //atribui as pontuacoes
    pontuacao += GetPontoPorTamanho(senha);
    pontuacao += GetPontoPorMinusculas(senha);
    pontuacao += GetPontoPorMaiusculas(senha);
    pontuacao += GetPontoPorDigitos(senha);
    pontuacao += GetPontoPorSimbolos(senha);
    pontuacao -= GetPontoPorRepeticao(senha);

    printf("\nPontuação da senha \"%s\" = %d\n", senha, pontuacao);

    return 0;
}
