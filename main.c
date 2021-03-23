#include "fun/define.c"											//
#include "fun/functions.c"										//Chamando os
#include "fun/playerX.c"										//Arquivos externos
#include "fun/playerO.c"										//

int main(){
																//Declarando as variáveis
	bool run = true;
	short unsigned int linha,coluna,casa,jogada,pontos[1000];//
	unsigned char option,data,nome[14],game[3][3] = {'~','~','~',	
							 					'~','~','~',
							 					'~','~','~',};	//

	system("mpg123 -q --loop 99 sound/break-acid.mp3 &");

	//Iniciando o jogo
	while(run){

		//Exibindo a tela de menu
		theMenu(&option);

		//Encerrando o jogo
		if(tolower(option) == 'e'){
			system("clear");
			break;
		}

		//Créditos
		if(tolower(option) == 'k'){
			system("clear");
			printf("\n\t"BOLD GREEN REVERSE"  >>>> https://github.com/hgkPhDt/TT <<<<  "RESET);
			printf("\n\n Game desenvolvido por: Philip Torres.");
			printf("\n Meus agradecimentos aos membros do grupo: C/C++ Language.");
			printf("\n Muitas dúvidas foram esclarecidas, e muito conhecimento\n foi transmido a mim.");
			printf(" Me perdoem caso eu esqueça de citar \n algum nome:\n\n"BOLD" Major Anilton, Deuzivan, Matheus Batista, "RESET);
			printf("\n\n Pressione "BOLD"ENTER"RESET" para sair.\n\n");
			limpabuffer();
		}

		//Opções de som
		if(tolower(option) == 'r'){
			system("clear");
			printf("\n\t "BOLD YELLOW REVERSE" >>>> OPTIONS <<<< "RESET);
			printf("\n\n\t ["MAGENTA BOLD"1"RESET"] Sound = No");
			printf("\n\n\t ["MAGENTA BOLD"2"RESET"] Sound = Yes");
			printf("\n\n\t ["MAGENTA BOLD"3"RESET"] Sound = High");	
			printf("\n\n\t ["MAGENTA BOLD"4"RESET"] Sound = Medium");	
			printf("\n\n\t ["MAGENTA BOLD"5"RESET"] Sound = Low\n\n\n  "YELLOW BOLD">>>"RESET);	
			limpabuffer();
		}

		//Obtendo dados do player
		if(tolower(option) == 'p'){
			system("clear");
			printf("\n\t "BOLD MAGENTA REVERSE" >>>> PLAYER <<<< "RESET);
			printf("\n\n Digite aqui o seu nickname para ser\n armazenado seu histórico de jogos ganhos.");
			printf("\n\n\n Nick: ");
			scanf("%s", &nome[0]);
			limpabuffer();

			printf("\n Bem-Vindo ao jogo, %s. Divirta-se!", nome);
			printf("\n Pressione "BOLD"ENTER"RESET"!\n\n\n");
			getchar();
		}

		//Histórico de jogos e suas pontuações
		if(tolower(option) == 'h'){
			system("clear");
			printf("\n\t"BOLD CYAN REVERSE"  >>>> YOUR HISTORY HERE! <<<<  "RESET);
			printf("\n\n\n\tNickname\tPontos\tData");
			printf("\n\n\t%s\t560\t22/03/2021", nome/*,pontos,data*/);
			printf("\n\n\n\n Pressione "BOLD"ENTER"RESET" para sair.\n\n\n");
			limpabuffer();
		}

		//Jogo da velha
		if(tolower(option) == 's'){

			//system("mpg123 -q &");
			//system("mpg123 -q -w --loop 99 sound/break-acid.wav &");

			putchar('\a');
			tabuleiro(linha,coluna,game);							//Imprime o tabuleiro

			for(jogada = 0; jogada < 9999; jogada++){

				printf(" Para sair, digite 0.\n");
				printf(" O "RED BOLD"X"RESET" escolhe a casa: ");	//
				scanf("%hd", &casa);								//Player 1
				limpabuffer();										//

				playerX(casa,game,option);							//Assinala a casa que o Player X escolheu

				ganhadorX(game,option);								//Analisa se o Player X ganhou

				tabuleiro(linha,coluna,game);						//Imprime o tabuleiro

				printf(" Para sair, digite 0.\n");
				printf(" O "GREEN BOLD"O"RESET" escolhe a casa: ");	//
				scanf("%hd", &casa);								//Player 2
				limpabuffer();										//

				playerO(casa,game);									//Assinala a casa que o Player O escolheu

				ganhadorO(game,option);								//Analisa se o Player O ganhou

				tabuleiro(linha,coluna,game);						//Imprime o tabuleiro
				
			}
		}
	}
}