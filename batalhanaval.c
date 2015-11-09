/**************************************   
* Trabalho 3 de Programacao de Computadores I - Batalha Naval  
* Curso de Sistemas da informacao  
* Aluno: Andrea Carlet Turella - matricula: 0050002409 
* Professor: Alex Salgado 
***************************************/

#include <stdio.h>
int main ()
{
    
    int campo[5][5] = {{1,1,0,0,0}, //Matriz do campo
                      {0,0,0,0,0},
                      {0,1,1,1,1},
                      {1,0,0,0,1},
                      {0,0,1,1,1}}; 
    int i, j; //Variáveis de controle da Matriz
    char nome[30]; // Nome do Jogador
    int saida = 1; //variavel de termino do jogo
    int ponto = 0; // variavel dos pontos
    
    printf ( "Informe seu nome:" );
    scanf ( " %s", nome );
    
    
    while ( saida == 1 )
    {
        printf("Informe as coordenadas do tiro (0 a 4 para linha e coluna.)\n Separe os valores de linha e coluna com um espaço.): ");
        scanf("%d %d", &i, &j);
        
        if ( campo[i][j] == 1 )
        {
            printf("\nBomba!! Você ganhou um ponto\n");
            ponto++;
        }
        else if ( campo[i][j] == 0 )
        {
            printf("\nAgua!! Você não pontuou :( \n");
        }
        
        printf( "\n Olá %s, você fez %d pontos!\n", nome, ponto );
        printf( "Deseja continuar? (Sim = 1, Não = 0)\n");
        scanf ( "%d", &saida);
        
        
    }
    
    return 0;
}