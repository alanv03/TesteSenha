//calcula o tamanho da string
int GetTamanho(char senha[11]) {
    int i;
    for (i=0; senha[i]!='\0'; i++) {}
    return i;
}

//6 pontos por cada caractere na senha (com um total de 60 pontos)
void GetPontoPorTamanho(char senha[11]) {
    int pontuacao = GetTamanho(senha)*6;
    return pontuacao;
}

//5 pontos por uma letra minúscula, 10 para mais de uma minúscula
int GetPontoPorMinusculas(char senha[11]) {
    int i, pontuacao = 0;

    for (i=0; senha[i]!='\0'; i++) {
        if (senha[i]>=97 && senha[i]<=122) {
            if (pontuacao == 0) pontuacao = 5;
            else if (pontuacao == 5) {
                pontuacao = 10;
                return pontuacao;
            }
        }
    }

    return pontuacao;
}

//5 pontos por uma letra maiúscula, 10 para mais de uma maiúscula
int GetPontoPorMaiusculas(char senha[11]) {
    int i, pontuacao = 0;

    for (i=0; senha[i]!='\0'; i++) {
        if (senha[i]>=65 && senha[i]<=90) {
            if (pontuacao == 0) pontuacao = 5;
            else if (pontuacao == 5) {
                pontuacao = 10;
                return pontuacao;
            }
        }
    }

    return pontuacao;
}

//5 pontos por um dígito numérico, 10 para mais de um dígito numérico
int GetPontoPorDigitos(char senha[11]) {
    int i, pontuacao = 0;

    for (i=0; senha[i]!='\0'; i++) {
        if (senha[i]>=48 && senha[i]<=57) {
            if (pontuacao == 0) pontuacao = 5;
            else if (pontuacao == 5) {
                pontuacao = 10;
                return pontuacao;
            }
        }
    }

    return pontuacao;
}

//5 pontos por qualquer caracter diferente de uma letra ou um numero, 10 por mais de um
int GetPontoPorSimbolos(char senha[11]) {
    int i, pontuacao = 0;

    for (i=0; senha[i]!='\0'; i++) {
        if ((senha[i]>=32 && senha[i]<=47) || (senha[i]>=58 && senha[i]<=64)) {
            if (pontuacao == 0) pontuacao = 5;
            else if (pontuacao == 5) {
                pontuacao = 10;
                return pontuacao;
            }
        }
    }

    return pontuacao;
}
//se houver caracteres repetidos, retira 30 pontos da fórmula final da pontuacao
int GetPontoPorRepeticao(char senha[11]) {
    for (int i=0; senha[i]!='\0'; i++) {
        for (int j=0; senha[i]!='\0'; j++) {
            if (senha[i] == senha[j]) {
                return 30;
            }
        }
    }

    return 0;
}


