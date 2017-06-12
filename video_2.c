#include <stdio.h>
#include <stdlib.h>
// Desenvolvimento:
// Lucas Nascimento Silva - 2216200795
// Fernando Henrique da Silva - 2216202903
int main()
{
    char nome[100];
    int num;
    printf("Bem vindo a tecnica Pomodoro!\nDigite seu nome: ");
    gets(nome);
    printf("Ola %s! Vamos aprender a ter mais foco em nossas tarefas do dia-a-dia. Serao somente quatro simples passos para alcancar a satisfacao de dever cumplido ao final de todos os dias. Vamos comecar\n\n", nome);
    // Primeiro Passo
    do{
        printf("* -------- Primeiro passo - Tempo -------- *\n");
        printf("Programar um cronometro para tocar daqui a 25 minutos. Esse periodo de tempo e chamado de POMODORI, dentro de um pomodori voce deve ficar focado em apenas UMA TAREFA.\n");
        printf("Dica de mestre: O POMODORI tem que ser exatamente de 25 minutos. Se terminar antes do tempo tente revisar, ajustar ou ate melhorar a tarefa.\n\n");

        printf("Fica facil aprender assim ne? Digite 1 para prosseguir...");
        scanf("%d",&num);
    }while(num!=1);
    // Segundo Passo
    do{
        printf("\n\n* -------- Segundo passo - Pausas -------- *\n");
        printf("As pausas sao obrigatorias, sempre que terminar um pomori tenha uma pausa de 5 minutos. Esse descanso serve para relaxar a mente. A cada 4 pomodori tire de 15 a 30 minutos de descanso.\n");
        printf("- Exemplo:\n");
        printf("Primeiro POMODORI = 5 min descanso.\n");
        printf("Segundo POMODORI = 5 min descanso.\n");
        printf("Terceiro POMODORI = 5 min descanso.\n");
        printf("Quarto POMODORI = 15 a 30 min descanso.\n");
        printf("Dica de mestre: Use a pausa para tomar agua, ir banheiro ou ate mesmo comemorar o pomodori concluido.\n\n");

        printf("Nossa! Voce esta indo muito bem! Digite 1 para prosseguir...");
        scanf("%d",&num);
    }while(num!=1);
    // Terceiro Passo
    do{
        printf("\n\n* -------- Terceiro passo - Ferramentas -------- *\n");
        printf("Voce ira precisar de ferramentas necessarias para realizar o pomodoro.\n");
        printf("1 - Cronometro\n");
        printf("2 - Listas (1 - Inventario);(1 - Tarefas do Dia)\n");
        printf("2.1 - Lista de Inventario sera para anotar todas as tarefas atuais e futuras\n");
        printf("2.2 - Lista das tarefas do dia sera apenas para anotar as tarefas do dia. Sao tarefas retiradas da lista de inventario e que aparecem durante o dia. Nessa lista voce deve colocar a quantidade de podori que ira gastar para concluir cada tarefa.\n");
        printf("Dica de mestre: As listas podem ser feitas em papel, celular ou no computador.\n");
        printf("Dica de mestre: E importante voce minimizar ao maximo as tarefas ao lista-las no dia. Estruture em topicos para que nao tenha uma quantidade grande de pomodori para uma so tarefa.\n\n");
        printf("Voce ja esta aqui? Digite 1 para prosseguir...");
        scanf("%d",&num);
    }while(num!=1);
    // Quarto Passo
    printf("\n\n* -------- Quarto passo - Interrupcoes -------- *\n");
    printf("Interrupcoes atrapalham bastante nossos desempenhos em tarefas, ao realizar a tarefa evite ao maximo interrupcoes seja por um telefonema, mensagem ou bate-papo com o colega.\n");
    printf("Dica de mestre: Seja educado e responda que no momento encontra-se ocupado e caso o assunto seja importante anote na lista de tarefas do dia.\n\n");

    printf("Parabens %s! Com todos esses passos voce ira se tornar uma pessoa mais focada e objetiva.\n", nome);

    return 0;
}
