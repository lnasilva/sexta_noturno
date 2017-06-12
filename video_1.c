#include <stdio.h>
#include <stdlib.h>
// Desenvolvimento:
// Lucas Nascimento Silva - 2216200795
// Fernando Henrique da Silva - 2216202903
int main()
{
    char assunto[100];
    int respUm, respDois, respTres, respQuatro, respCinco;
    printf("Bem vindo a Tecnica Feynman!\n");
    printf("Aqui voce ira se tornar um mestre no estudo igual Richard Feynman\n\n");

    // 1º Etapa - Assunto, Pesquisa e Estudo
    printf("- Primeira etapa\n");
    printf("Escolha o assunto que deseja dominar\n");
    do{
        printf("Digite o assunto: ");
        gets(assunto);
    }while(strlen(assunto)<1);
    do{
        printf("\nBusque %s nas melhores fontes, sites e livros, entao comece a estudar como de costume!\n",assunto);
        printf("\nVoce escolheu o assunto, pesquisou e estudou ele?\n- Digite 1 para Sim e 0 para Nao\n");
        scanf("%d",&respUm);
        if((respUm != 1)&&(respUm != 0)){
            printf("Ops! Digite apenas os caracteries informado.\n");
        }else if(respUm == 0){
            printf("Vamos la! Repita novamente o processo...\n");
        }else{
            printf("Parabens! Voce esta indo muito bem.\n* Primeira etapa concluida com sucesso\n\n");
        }
    }while(respUm!=1);

    do{
        // 2º Etapa - Escreva sobre o assunto
        printf("- Segunda etapa\n");
        printf("Escreva sobre o assunto.\n\n");
        do{
            printf("Escreva sobre o assunto numa folha, como se voce estivesse explicando o assunto para outra pessoa\n");
            printf("* Dica de mestre: Falar enquanto escreve e usar uma folha de papel trara um efeito positivo na sua aprendizagem.\n");
            printf("\nVoce escreveu sobre o assunto?\n- Digite 1 para Sim e 0 para Nao\n");
            scanf("%d",&respDois);
            if((respDois != 1)&&(respDois != 0)){
                printf("Ops! Digite apenas os caracteries informado.\n");
            }else if(respDois == 0){
                printf("Vamos la! Repita novamente o processo...\n");
            }else{
                printf("Parabens! Voce ja e um ninja nos estudos.\n* Segunda etapa concluida com sucesso\n\n");
            }
        }while(respDois!=1);

        // 3º Etapa - Fale em voz alta
        printf("- Terceira etapa\n");
        printf("Fale em voz alta enquanto escreve sobre o assunto.\n\n");
        printf("Tenho certeza que voce ja concluiu essa etapa, mas vamos la...\n");
        do{
            printf("\nVoce falou enquanto escrevia sobre o assunto?\n- Digite 1 para Sim e 0 para Nao\n");
            scanf("%d",&respTres);
            if((respTres != 1)&&(respTres != 0)){
                printf("Ops! Digite apenas os caracteries informado.\n");
            }else if(respTres == 0){
                printf("Eita! Vamos voltar a Segunda Etapa e falar enquanto escrevemos. Nao desista acredito em voce...\n");
            }else{
                printf("Eu ja sabia! Voce esta demais.\n* Terceira etapa concluida com sucesso\n\n");
            }
        }while((respTres != 1)&&(respTres != 0));
    }while(respTres!=1);

    // 4º Etapa - Percepcao dos topicos do assunto
    printf("- Quarta etapa\n");
    printf("Assim que terminar a explicacao voce ira perceber quais pontos esta dominando e quais estara com dificuldades.\n\n");
    do{
        printf("Voce ficou com dificuldade em algum ponto/topico?\n- Digite 1 para Sim e 0 para Nao\n");
        scanf("%d",&respQuatro);
        if((respQuatro != 1)&&(respQuatro != 0)){
            printf("Ops! Digite apenas os caracteries informado.\n");
        }else if(respQuatro == 0){
            printf("Nossa que demais! Palmas e pouco para o que voce fez ate agora, merece Tocatins inteiro!\n* Quarta etapa concluida com sucesso");
        }else{
            printf("Vamos la! Estude novamente ate que fique craque.\n");
        }
    }while(respQuatro == 1);

    // 5º Etapa - Fale em voz alta
    printf("- Quinta etapa\n");
    printf("Assim que terminar tudo e estiver dominando o assunto, repita o processo, mas dessa vez tente simplificar o maximo possivel a explicação para que qualquer uma pessoa consiga entender as ideia que voce esta transmitindo.\n\n");

    do{
        printf("Voce repitiu todo o processo, simplificou as ideias e esta sem dificuldades na explicacao?\n- Digite 1 para Sim e 0 para Nao\n");
        printf("* Dica de mestre: Use imagens ou graficas. Isso ira facilitar a aprendizagem\n");
        scanf("%d",&respCinco);
        if((respCinco != 1)&&(respCinco != 0)){
            printf("Ops! Digite apenas os caracteries informado.\n");
        }else if(respCinco == 0){
            printf("Nossa que demais! Palmas e pouco para o que voce fez ate agora, merece Tocatins inteiro!\n");
        }else{
            printf("Voce e um Feynman ou melhor um MESTRE! Voce concluiu todas as etapas e ira lembrar para sempre sobre %s.\n", assunto);
        }
    }while(respCinco == 1);
    printf("Obrigado e volte sempre.\n");
    return 0;
}
