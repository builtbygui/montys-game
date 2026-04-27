#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//defino as cores para serem impresas nos textos dos termnais 
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_RESET   "\x1b[0m"


int main()
{
        srand(time(NULL)); //aleatoriedade definida com base no horário
        char cont;
 do
  {
     printf(ANSI_COLOR_RED "BEM VINDO AO MONTY'S GAME" ANSI_COLOR_RESET "\n");
     printf(ANSI_COLOR_RED "Você pode ganhar uma cabra ou 100 milhões de doláres!" ANSI_COLOR_RESET "\n"); 

     int porta_escolhida;
     int porta_premiada = (rand() % 3) + 1; //calcúlo de aleatoridade para as três portas
     int porta_aberta;
     int porta_restante;

     printf(ANSI_COLOR_RED "Vamos ao jogo!\nEscolha uma porta" ANSI_COLOR_RESET "\n");
     printf(ANSI_COLOR_GREEN "Porta 1 - verde" ANSI_COLOR_RESET "\n");
     printf(ANSI_COLOR_BLUE "Porta 2 - azul" ANSI_COLOR_RESET "\n"); 
     printf(ANSI_COLOR_YELLOW "Porta 3 - amarela" ANSI_COLOR_RESET "\n"); 
     printf(ANSI_COLOR_RED "Digite apenas o número da sua porta, ok?" ANSI_COLOR_RESET "\n");  

     printf("Qual vai ser?: ");
        scanf (" %d", &porta_escolhida);

 while (porta_escolhida != 1 && porta_escolhida != 2 && porta_escolhida !=3)
    {
     printf(ANSI_COLOR_RED "É para digitar o número de uma porta que exista, cabeção!" ANSI_COLOR_RESET "\n"); 
     printf(ANSI_COLOR_RED "Qual vai ser?: " ANSI_COLOR_RESET "\n");   
        scanf (" %d", &porta_escolhida);
    }

     printf(ANSI_COLOR_RED "Antes de continuarmos, irei te mostrar o que tem em uma das portas ;)" ANSI_COLOR_RESET "\n"); 
 if(1 != porta_escolhida && 1 != porta_premiada){
    porta_aberta = 1;
     printf(ANSI_COLOR_GREEN "Para te ajudar, vou te mostrar o que tem na porta verde, vamos ver.." ANSI_COLOR_RESET "\n"); 
     printf(ANSI_COLOR_GREEN "Ufa, ainda bem que você não escolheu essa, só tinha uma cabra aqui!" ANSI_COLOR_RESET "\n"); 
    }
 else if(2 != porta_escolhida && 2 != porta_premiada){
     porta_aberta = 2;
     printf(ANSI_COLOR_BLUE "Para te ajudar, vou te mostrar o que tem na porta azul, vamos ver.." ANSI_COLOR_RESET "\n"); 
     printf(ANSI_COLOR_BLUE "Ufa, ainda bem que você não escolheu essa, só tinha uma cabra aqui!" ANSI_COLOR_RESET "\n"); 
    }
 else if(3 != porta_escolhida && 3 != porta_premiada){
     porta_aberta = 3;
     printf(ANSI_COLOR_YELLOW "Para te ajudar, vou te mostrar o que tem na porta amarela, vamos ver.." ANSI_COLOR_RESET "\n"); 
     printf(ANSI_COLOR_YELLOW "Ufa, ainda bem que você não escolheu essa, só tinha uma cabra aqui!" ANSI_COLOR_RESET "\n"); 
    }
         char decisao;
     printf(ANSI_COLOR_RED "Agora você decide! Vai Continuar com a sua escolha ou vai mudar para a outra restante?.." ANSI_COLOR_RESET "\n");
     printf(ANSI_COLOR_RED "Digite C para continuar ou M para mudar" ANSI_COLOR_RESET "\n");
             porta_restante = 6 - porta_escolhida - porta_aberta;
         scanf(" %c", &decisao);
 if (decisao == 'C'){ 
 if (porta_escolhida == porta_premiada)
      {
     printf(ANSI_COLOR_RED "Então vamos ver... MEUS PARABÉNS, VOCÊ ACABA DE GANHAR 100 MILHÕES DE DOLÁRES :O" ANSI_COLOR_RESET "\n");
      }
 else printf(ANSI_COLOR_RED "Então vamos ver... você ganhou a cabra :3" ANSI_COLOR_RESET "\n");
    }
 else if (decisao == 'M')
    {
 if (porta_restante == porta_premiada)
      {
       printf(ANSI_COLOR_RED "Então vamos ver... MEUS PARABÉNS, VOCÊ ACABA DE GANHAR 100 MILHÕES DE DOLÁRES :O" ANSI_COLOR_RESET "\n");
      }
       else printf(ANSI_COLOR_RED "Então vamos ver... você ganhou a cabra :3" ANSI_COLOR_RESET "\n");
    }

     printf(ANSI_COLOR_RED "FIM DE JOGO" ANSI_COLOR_RESET "\n");
     printf(ANSI_COLOR_RED "Deseja continuar?" ANSI_COLOR_RESET "\n");
     printf(ANSI_COLOR_RED "(Digite S para sim e N para não?)" ANSI_COLOR_RESET "\n");
         scanf(" %c", &cont);
     } while (cont == 'S');

 return 0;
}
