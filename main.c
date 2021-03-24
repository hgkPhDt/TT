#include "fun/define.c"	
#include "fun/functions.c"

int main(){
	//Declarando as variáveis
	bool run = true;
	short unsigned int linha,coluna,casa,jogada,pontos=0, l,c, som = 1;
	unsigned char option,data,nome[14],game[3][3] ={'~','~','~',	
							 						'~','~','~',
							 						'~','~','~',};
start:
system("mpg123 -q --loop 99 sound/break-acid.mp3 &");

	//Iniciando o jogo
	while(run){

		//Exibindo a tela de menu
		theMenu(&option);

		//Encerrando o jogo
		if(tolower(option) == 'e'){
			system("pkill mpg123");
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
			option = getchar();
			limpabuffer();

			switch(option){
				case 1:
					system("pkill mpg123");
					break;
				case 2:
					break;
				case 3:
					break;
				case 4:
					break;
				case 5:
					break;
			}

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
			printf("\n\n\n\t Nickname: %s", nome);
			printf("\n\t Pontos: %hd", pontos);
			//printf("\n\n\n\t Data: %hd/%hd/%hd ás %hd:%hd", data);
			putchar('\n');
			putchar('\n');
			
			printf("\n\n\n\n Pressione "BOLD"ENTER"RESET" para sair.\n\n\n");
			limpabuffer();
		}

		//Jogo da velha
		if(tolower(option) == 's'){
			system("pkill mpg123");

			putchar('\a');

			//Imprime o tabuleiro inicial
			tabuleiro(linha,coluna,game);							

			for(jogada = 0; jogada < 9999; jogada++){

				//Inicia a jogada do player X
				
				printf(" Para sair, digite 0.\n");
				restartX:
				printf(" O "RED BOLD"X"RESET" escolhe a casa: ");	
				scanf("%hd", &casa);								
				limpabuffer();										
				system("mpg123 -q -k 10 sound/click.mp3 &");
				

				//Assinala a casa que o Player X escolheuou
				//Verifica se ja tem alguma casa ocupada
				if(	casa == 1 && game[0][0] == 'O'||
					casa == 2 && game[0][1] == 'O'||
					casa == 3 && game[0][2] == 'O'||
					casa == 4 && game[1][0] == 'O'||
					casa == 5 && game[1][1] == 'O'||
					casa == 6 && game[1][2] == 'O'||
					casa == 7 && game[2][0] == 'O'||
					casa == 8 && game[2][1] == 'O'||
					casa == 9 && game[2][2] == 'O'||
					//...........................//
					casa == 1 && game[0][0] == 'X'||
					casa == 2 && game[0][1] == 'X'||
					casa == 3 && game[0][2] == 'X'||
					casa == 4 && game[1][0] == 'X'||
					casa == 5 && game[1][1] == 'X'||
					casa == 6 && game[1][2] == 'X'||
					casa == 7 && game[2][0] == 'X'||
					casa == 8 && game[2][1] == 'X'||
					casa == 9 && game[2][2] == 'X'){
					printf(RED BOLD" Oops! Aqui já tem dono... Jogue novamente!\n"RESET);
					goto restartX;
				}

					//Se não tiver nenhuma casa ocupada
					//Passa para o switch e assinala a mesma
					switch(casa){
						case 1:
							game[0][0] = 'X';
							break;
						case 2:
							game[0][1] = 'X';
							break;
						case 3:
							game[0][2] = 'X';
							break;
						case 4:
							game[1][0] = 'X';
							break;
						case 5:
							game[1][1] = 'X';
							break;
						case 6:
							game[1][2] = 'X';
							break;
						case 7:
							game[2][0] = 'X';
							break;
						case 8:
							game[2][1] = 'X';
							break;
						case 9:
							game[2][2] = 'X';
							break;
						case 0:
							for(l = 0; l <= 2; l++){
								putchar('\n');
								for(c = 0; c <= 2; c++){
									putchar('\t');
									game[l][c] = '~';
									printf("%c", game[l][c]);
								}
								putchar('\n');
								putchar('\n');
							}
							goto start;
							break;
					}							
					
				//Analisa se o player X ganhou ou houve empate
					//Primeira linha X
				if(	game[0][0] == 'X'&&
					game[0][1] == 'X'&&
					game[0][2] == 'X'||
					//Segunda linha X
					game[1][0] == 'X'&&
					game[1][1] == 'X'&&
					game[1][2] == 'X'||
					//Terceira linha x
					game[2][0] == 'X'&&
					game[2][1] == 'X'&&
					game[2][2] == 'X'||
					//Primeira coluna X
					game[0][0] == 'X'&&
					game[1][0] == 'X'&&
					game[2][0] == 'X'||
					//Segunda coluna X
					game[0][1] == 'X'&&
					game[1][1] == 'X'&&
					game[2][1] == 'X'||
					//Terceira coluna X
					game[0][2] == 'X'&&
					game[1][2] == 'X'&&
					game[2][2] == 'X'||
					//Primeira diagonal
					game[0][0] == 'X'&&
					game[1][1] == 'X'&&
					game[2][2] == 'X'||
					//Segunda diagonal
					game[0][2] == 'X'&&
					game[1][1] == 'X'&&
					game[2][0] == 'X'){
					system("clear");
					system("mpg123 -q -k 10 sound/you-win.mp3 &");
					printf("\n\n\tO Player "RED BOLD"X"RESET" ganhou!!");
					printf("\n\t  Continuar [Y/n]? \n\n\n   "BOLD YELLOW">>"RESET);
					option = getchar();
					limpabuffer();

					pontos += 5;

					//Volta para o menu inicial, caso o Player X escolha a opção N!
					if(tolower(option) == 'n'){
						limpaTabuleiro(l,c,game);
						goto start;
					}

					limpaTabuleiro(l,c,game);

					//verifica se houve empate no jogo
				}else if(	game[0][0] != '~'&&
							game[0][1] != '~'&&
							game[0][2] != '~'&&
							game[1][0] != '~'&&
							game[1][1] != '~'&&
							game[1][2] != '~'&&
							game[2][0] != '~'&&
							game[2][1] != '~'&&
							game[2][2] != '~'){

					system("clear");
					printf("\n\n\t"RED BOLD BLINK REVERSE"  >>>> EMPATE! <<<<  "RESET"\n");
					printf("\t:Pressione ENTER!!:\n\n\n");
					getchar();


					//Limpando o tabuleiro
					for(l = 0; l <= 2; l++){
						putchar('\n');
						for(c = 0; c <= 2; c++){
							putchar('\t');
							game[l][c] = '~';
							printf("%c", game[l][c]);
						}
						putchar('\n');
						putchar('\n');
					}
				}

				tabuleiro(linha,coluna,game);						//Imprime o tabuleiro





				/*
				 *   Inicialmente, os códigos acima estavam em funções
				 * em um arquivo externo. Porém, houve algumas limitações quando se tratava do "goto start;". O mesmo
				 * não funcionaria caso estivessem em arquivos separados, isso me deixou muito desconfortável, pois
				 * não queria deixar o arquivo principal tão extenso/poluído. Então por limitações, fui obrigado a voltar
				 * com a função inteira no código fonte principal. Isso se aplica também para o player O.
				 *   Além disso, esse comentário, também tem a intenção de separar os dois players, mantendo assim
				 * Melhor organizado o código.
				 */




				
				//Inicia a jogada do player O
				printf(" Para sair, digite 0.\n");
				restartO:
				printf(" O "GREEN BOLD"O"RESET" escolhe a casa: ");	
				scanf("%hd", &casa);								
				limpabuffer();							
				system("mpg123 -q sound/pop5.mp3 &");

				//Assinala a casa que o Player O escolheu
				//Verifica se ja tem alguma casa ocupada
				if(	casa == 1 && game[0][0] == 'X'||
					casa == 2 && game[0][1] == 'X'||
					casa == 3 && game[0][2] == 'X'||
					casa == 4 && game[1][0] == 'X'||
					casa == 5 && game[1][1] == 'X'||
					casa == 6 && game[1][2] == 'X'||
					casa == 7 && game[2][0] == 'X'||
					casa == 8 && game[2][1] == 'X'||
					casa == 9 && game[2][2] == 'X'||
					//...........................//
					casa == 1 && game[0][0] == 'O'||
					casa == 2 && game[0][1] == 'O'||
					casa == 3 && game[0][2] == 'O'||
					casa == 4 && game[1][0] == 'O'||
					casa == 5 && game[1][1] == 'O'||
					casa == 6 && game[1][2] == 'O'||
					casa == 7 && game[2][0] == 'O'||
					casa == 8 && game[2][1] == 'O'||
					casa== 9 && game[2][2] == 'O'){
					printf(RED BOLD" Oops! Aqui já tem dono... Jogue novamente!\n"RESET);
					goto restartO;
				}

					//Se não tiver nenhuma casa ocupada
					//Passa para o switch e assinala a mesma
					switch(casa){
						case 1:
							game[0][0] = 'O';
							break;
						case 2:
							game[0][1] = 'O';
							break;
						case 3:
							game[0][2] = 'O';
							break;
						case 4:
							game[1][0] = 'O';
							break;
						case 5:
							game[1][1] = 'O';
							break;
						case 6:
							game[1][2] = 'O';
							break;
						case 7:
							game[2][0] = 'O';
							break;
						case 8:
							game[2][1] = 'O';
							break;
						case 9:
							game[2][2] = 'O';
						case 0:
							limpaTabuleiro(l,c,game);
							goto start;
							break;
					}								

				//Analisa se o player O ganhou
				if(	game[0][0] == 'O'&&
						game[0][1] == 'O'&&
						game[0][2] == 'O'||
						//Segunda linha X
						game[1][0] == 'O'&&
						game[1][1] == 'O'&&
						game[1][2] == 'O'||
						//Terceira linha x
						game[2][0] == 'O'&&
						game[2][1] == 'O'&&
						game[2][2] == 'O'||
						//Primeira coluna X
						game[0][0] == 'O'&&
						game[1][0] == 'O'&&
						game[2][0] == 'O'||
						//Segunda coluna X
						game[0][1] == 'O'&&
						game[1][1] == 'O'&&
						game[2][1] == 'O'||
						//Terceira coluna X
						game[0][2] == 'O'&&
						game[1][2] == 'O'&&
						game[2][2] == 'O'||
						//Primeira diagonal
						game[0][0] == 'O'&&
						game[1][1] == 'O'&&
						game[2][2] == 'O'||
						//Segunda diagonal
						game[0][2] == 'O'&&
						game[1][1] == 'O'&&
						game[2][0] == 'O'){
						system("clear");
						system("mpg123 -q -h 50 sound/you-win.mp3 &");
						printf("\n\n\tO Player "GREEN BOLD"O"RESET" ganhou!!");
						printf("\n\t  Continuar [Y/n]? \n\n\n   "BOLD YELLOW">>"RESET);
						option = getchar();
						limpabuffer();

						pontos += 5;

						//Volta para o menu inicial, caso o Player O escolha a opção N!
						if(tolower(option) == 'n'){
							limpaTabuleiro(l,c,game);
							goto start;
						}

						//Limpando o tabuleiro
						limpaTabuleiro(l,c,game);

						//Verifica se houve empate no jogo
					}else if(	game[0][0] != '~'&&
								game[0][1] != '~'&&
								game[0][2] != '~'&&
								game[1][0] != '~'&&
								game[1][1] != '~'&&
								game[1][2] != '~'&&
								game[2][0] != '~'&&
								game[2][1] != '~'&&
								game[2][2] != '~'){

						system("clear");
						printf("\n\n\t"RED BOLD BLINK REVERSE"  >>>> EMPATE! <<<<  "RESET"\n");
						printf("\n\n\nPressione "BOLD"ENTER"RESET" para sair\n\n\n");
						getchar();

						//Limpando o tabuleiro
						limpaTabuleiro(l,c,game);
					}

				//Imprime o tabuleiro
				tabuleiro(linha,coluna,game);
				
			}
		}
	}
}
