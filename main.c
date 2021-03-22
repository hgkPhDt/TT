#include "define.c"											//
#include "functions.c"										//Chamando os
#include "playerX.c"										//Arquivos externos
#include "playerO.c"										//

int main(){
															//Declarando as variáveis
	unsigned char game[3][3] = {'~','~','~',
							 	'~','~','~',
							 	'~','~','~',};
	short unsigned int linha,coluna,casa,player1,player2,jogada;

	tabuleiro(linha,coluna,game);							//Imprime o tabuleiro

	for(player1 = 0; player1 < 9999; player1++){

		printf(" O "RED BOLD"X"RESET" escolhe a casa: ");	//
		scanf("%hd", &casa);								//Player 1
		limpabuffer();										//

		playerX(casa,game);									//Assinala a casa que o Player X escolheu

		ganhadorX(game);									//Analisa se o Player X ganhou

		tabuleiro(linha,coluna,game);						//Imprime o tabuleiro

		printf(" O "GREEN BOLD"O"RESET" escolhe a casa: ");	//
		scanf("%hd", &casa);								//Player 2
		limpabuffer();										//

		playerO(casa,game);									//Assinala a casa que o Player O escolheu

		ganhadorO(game);									//Analisa se o Player O ganhou

		tabuleiro(linha,coluna,game);						//Imprime o tabuleiro
		
	}
}