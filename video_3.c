#include <stdio.h>
#include <stdlib.h>
// Desenvolvimento:
// Lucas Nascimento Silva - 2216200795
// Fernando Henrique da Silva - 2216202903
int main(){
    char apelido[100],deixa[255],rotina[255],recompensa[255];
    printf("Bem vindo ao aplicativo: CRIANDO BONS HABTOS\n");
    printf("Digite seu nome/apelido: ");
    gets(apelido);
    printf("* ----- Objetivo ----- *\n");
    printf("Com apenas tres passos iremos criar bons habitos para praticar no dia-a-dia, trazendo assim melhorias e bem estar a nos.\nEsse aplicativo tem como referencia a tecnica Loop do Habito utilizada por Claude Hopkins.\n\n");

    printf("* ----- Primeiro Passo - Deixa ----- *\n");
    printf("Qual deixa voce ira utilizar para incentivar o inicio da rotina?\nR: ");
    gets(deixa);

    printf("\n\n* ----- Segundo Passo - Rotina ----- *\n");
    printf("Qual a rotina voce ira utilizar para obter a recompensa?\nR: ");
    gets(rotina);

    printf("\n\n* ----- Segundo Passo - Recompensa ----- *\n");
    printf("Qual a recompensa voce tera?\nR: ");
    gets(recompensa);

    printf("Pronto %s. Na deixa: '%s'.\nExecutar a rotina %s, assim ira obter %s.\n",apelido,deixa,rotina,recompensa);
    printf("Repita esse processo diariamente e ira criar o seu bom habito!");

    return 0;
}
