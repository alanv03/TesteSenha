#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED

int GetTamanho(char senha[11]);
int GetPontoPorTamanho(char senha[11], int * pontuacao);
int GetPontoPorMinusculas(char senha[11]);
int GetPontoPorMaiusculas(char senha[11]);
int GetPontoPorDigitos(char senha[11]);
int GetPontoPorSimbolos(char senha[11]);
int GetPontoPorRepeticao(char senha[11]);

#endif // FUNCOES_H_INCLUDED
