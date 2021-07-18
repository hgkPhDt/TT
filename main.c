#include "fun/define.c"
#include "fun/functions.c"

int main(){
	bool run = true;
	short unsigned int line,column,box,jogada,score=0, l,c, sound = 1;
	unsigned char option,data,nickname[14],hash[3][3] ={'~','~','~',	
							 						'~','~','~',
							 						'~','~','~',};
start:
system("mpg123 -q --loop 99 sound/break-acid.mp3 &");

	//Start game
	while(run){

		//Print the menu
		theMenu(&option,hash);

		//Kill the game
		if(tolower(option) == 'e'){
			system("pkill mpg123");
			system("clear");
			break;
		}

		//I
		if(tolower(option) == 'k'){
			system("clear");
			printf("\n\t"BOLD GREEN REVERSE"  >>>> https://github.com/hgkPhDt/TT <<<<  "RESET);
			printf("\n\n This game's developed by Philip Torres.");
			printf("\n Press "BOLD"ENTER"RESET" to leave.\n\n");
			bufferClean();
		}

		//Sound options
		if(tolower(option) == 'r'){
			system("clear");
			printf("\n\t "BOLD YELLOW REVERSE" >>>> OPTIONS <<<< "RESET);
			printf("\n\n\t ["MAGENTA BOLD"1"RESET"] Sound = No");
			printf("\n\n\t ["MAGENTA BOLD"2"RESET"] Sound = Yes");
			printf("\n\n\t ["MAGENTA BOLD"3"RESET"] Sound = High");	
			printf("\n\n\t ["MAGENTA BOLD"4"RESET"] Sound = Medium");	
			printf("\n\n\t ["MAGENTA BOLD"5"RESET"] Sound = Low");	
			printf("\n\n\t ["MAGENTA BOLD"0"RESET"] Sound = exit\n\n\n>>");
			option = getchar();
			bufferClean();

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

		//Data the player
		if(tolower(option) == 'p'){
			system("clear");
			printf("\n\t "BOLD MAGENTA REVERSE" >>>> PLAYER <<<< "RESET);
			printf("\n\n Write your nickname here.\n Please, don't use space.");
			printf("\n Nick: ");
			scanf("%s", &nickname[0]);
			bufferClean();

			printf("\n Welcome, %s. Enjoy yourself!", nickname);
			printf("\n Press "BOLD"ENTER"RESET".\n\n\n");
			getchar();
		}

		//History and your score
		if(tolower(option) == 'h'){
			system("clear");
			printf("\n\t"BOLD CYAN REVERSE"  >>>> YOUR HISTORY HERE! <<<<  "RESET);
			printf("\n\n\n\t Nickname: %s", nickname);
			printf("\n\t Score: %hd", score);
			putchar('\n');
			putchar('\n');
			
			printf("\n\n\n\n Press "BOLD"ENTER"RESET" to leave.\n\n\n");
			bufferClean();
		}

		//Tic tac toe
		if(tolower(option) == 's'){
			system("pkill mpg123");

			//Print the table
			hashTable(line,column,hash);							

			for(jogada = 0; jogada < 9999; jogada++){
				//Player X's starts
				printf(" To leave, press 0.\n");
				restartX:
				printf(" The "RED BOLD"X"RESET" is playing: ");	
				scanf("%hd", &box);								
				bufferClean();										
				system("mpg123 -q -k 10 sound/click.mp3 &");
				
				///Checking if have the case occupied
				if(	box == 1 && hash[2][0] == 'O'||
					  box == 2 && hash[2][1] == 'O'||
					  box == 3 && hash[2][2] == 'O'||
					  box == 4 && hash[1][0] == 'O'||
					  box == 5 && hash[1][1] == 'O'||
					  box == 6 && hash[1][2] == 'O'||
					  box == 7 && hash[0][0] == 'O'||
					  box == 8 && hash[0][1] == 'O'||
					  box == 9 && hash[0][2] == 'O'||
					  //...........................//
					  box == 1 && hash[2][0] == 'X'||
					  box == 2 && hash[2][1] == 'X'||
					  box == 3 && hash[2][2] == 'X'||
					  box == 4 && hash[1][0] == 'X'||
					  box == 5 && hash[1][1] == 'X'||
					  box == 6 && hash[1][2] == 'X'||
					  box == 7 && hash[0][0] == 'X'||
					  box == 8 && hash[0][1] == 'X'||
					  box == 9 && hash[0][2] == 'X'){
					  printf(RED BOLD" Oops! try again!\n"RESET);
					  goto restartX;
				  }

					//If no having case occupied fill with the number
					switch(box){
						case 1:
							hash[2][0] = 'X';
							break;
						case 2:
							hash[2][1] = 'X';
							break;
						case 3:
							hash[2][2] = 'X';
							break;
						case 4:
							hash[1][0] = 'X';
							break;
						case 5:
							hash[1][1] = 'X';
							break;
						case 6:
							hash[1][2] = 'X';
							break;
						case 7:
							hash[0][0] = 'X';
							break;
						case 8:
							hash[0][1] = 'X';
							break;
						case 9:
							hash[0][2] = 'X';
							break;
						case 0:
							goto start;
							break;
					}							
					
				
        //Checking if the player X won
					//First line
				if(	hash[0][0] == 'X'&&
					hash[0][1] == 'X'&&
					hash[0][2] == 'X'||
					//Second line
					hash[1][0] == 'X'&&
					hash[1][1] == 'X'&&
					hash[1][2] == 'X'||
					//Third line
					hash[2][0] == 'X'&&
					hash[2][1] == 'X'&&
					hash[2][2] == 'X'||
					//First column
					hash[0][0] == 'X'&&
					hash[1][0] == 'X'&&
					hash[2][0] == 'X'||
					//Second column
					hash[0][1] == 'X'&&
					hash[1][1] == 'X'&&
					hash[2][1] == 'X'||
					//Third column
					hash[0][2] == 'X'&&
					hash[1][2] == 'X'&&
					hash[2][2] == 'X'||
					//First diagonal
					hash[0][0] == 'X'&&
					hash[1][1] == 'X'&&
					hash[2][2] == 'X'||
					//Second diagonal
					hash[0][2] == 'X'&&
					hash[1][1] == 'X'&&
					hash[2][0] == 'X'){
					system("clear");
					system("mpg123 -q -k 10 sound/you-win.mp3 &");
					printf("\n\n\tPlayer "RED BOLD"X"RESET" won!");
					printf("\n\tContinue [Y/n]? \n\n\n   "BOLD YELLOW">> "RESET);
					option = getchar();
					bufferClean();

					score += 5;

					//Return to menu
					if(tolower(option) == 'n'){
						system("pkill mpg123");
						hashClean(l,c,hash);
						goto start;
					}

					//Clean the table
					hashClean(l,c,hash);
					system("pkill mpg123");
            
				//Checking if it's a draw.
				}else if(	hash[0][0] != '~'&&
							    hash[0][1] != '~'&&
							    hash[0][2] != '~'&&
							    hash[1][0] != '~'&&
							    hash[1][1] != '~'&&
							    hash[1][2] != '~'&&
							    hash[2][0] != '~'&&
							    hash[2][1] != '~'&&
							    hash[2][2] != '~'){

					system("clear");
					printf("\n\n\t"YELLOW BOLD REVERSE"  >>>> IT'S A DRAW. <<<<  "RESET"\n");
					printf("\tPress "BOLD"ENTER"RESET" to return.\n\n\n");
					getchar();
                  

					//Clean the table
					hashClean(l,c,hash);
        }
                                
				//Print the table
				hashTable(line,column,hash);						


				/*******************************************************************************************************\
				 *   Inicialmente, os códigos acima estavam em funções
				 * em um arquivo externo. Porém, houve algumas limitações quando se tratava do "goto start;". O mesmo
				 * não funcionaria caso estivessem em arquivos separados, isso me deixou desconfortável, pois
				 * não queria deixar o arquivo principal tão extenso. Então por limitações, fui obrigado a voltar
				 * com a função inteira no código fonte principal. Isso também se aplica para o player O.
				\*******************************************************************************************************/

				//Player's O starts
				restartO:
        box = rand() % 9;

        //Checking if have the case occupied
				if(	box == 1 && hash[2][0] == 'X'||
					box == 2 && hash[2][1] == 'X'||
					box == 3 && hash[2][2] == 'X'||
					box == 4 && hash[1][0] == 'X'||
					box == 5 && hash[1][1] == 'X'||
					box == 6 && hash[1][2] == 'X'||
					box == 7 && hash[0][0] == 'X'||
					box == 8 && hash[0][1] == 'X'||
					box == 9 && hash[0][2] == 'X'||
					//...........................//
					box == 1 && hash[2][0] == 'O'||
					box == 2 && hash[2][1] == 'O'||
					box == 3 && hash[2][2] == 'O'||
					box == 4 && hash[1][0] == 'O'||
					box == 5 && hash[1][1] == 'O'||
					box == 6 && hash[1][2] == 'O'||
					box == 7 && hash[0][0] == 'O'||
					box == 8 && hash[0][1] == 'O'||
					box == 9 && hash[0][2] == 'O'){
					goto restartO;
				}

          //If no having case occupied fill with the number
					switch(box){
						case 1:
							hash[2][0] = 'O';
							break;
						case 2:
							hash[2][1] = 'O';
							break;
						case 3:
							hash[2][2] = 'O';
							break;
						case 4:
							hash[1][0] = 'O';
							break;
						case 5:
							hash[1][1] = 'O';
							break;
						case 6:
							hash[1][2] = 'O';
							break;
						case 7:
							hash[0][0] = 'O';
							break;
						case 8:
							hash[0][1] = 'O';
							break;
						case 9:
							hash[0][2] = 'O';
							break;
            case 0:
              goto restartO;
              break;
					}								

        //Checking if player O won

        // //First line
				if(	hash[0][0] == 'O'&&
						hash[0][1] == 'O'&&
						hash[0][2] == 'O'||
						//Second line
						hash[1][0] == 'O'&&
						hash[1][1] == 'O'&&
						hash[1][2] == 'O'||
						//Third line
						hash[2][0] == 'O'&&
						hash[2][1] == 'O'&&
						hash[2][2] == 'O'||
						//First column
						hash[0][0] == 'O'&&
						hash[1][0] == 'O'&&
						hash[2][0] == 'O'||
						//Second column
						hash[0][1] == 'O'&&
						hash[1][1] == 'O'&&
						hash[2][1] == 'O'||
						//Third column
						hash[0][2] == 'O'&&
						hash[1][2] == 'O'&&
						hash[2][2] == 'O'||
						//First diagonal
						hash[0][0] == 'O'&&
						hash[1][1] == 'O'&&
						hash[2][2] == 'O'||
						//Second diagonal
						hash[0][2] == 'O'&&
						hash[1][1] == 'O'&&
						hash[2][0] == 'O'){
						system("clear");
						system("mpg123 -q -k 10 sound/alshred-losersound.mp3 &");
						printf("\n\n\tPlayer "GREEN BOLD"O"RESET" won!");
						printf("\n\tContinue [Y/n]? \n\n\n   "BOLD YELLOW">>"RESET);
						option = getchar();
						bufferClean();

						score -= 3;

            //Return to menu.
						if(tolower(option) == 'n'){
							system("pkill mpg123");
							hashClean(l,c,hash);
							goto start;
						}

						//Clean the table
						hashClean(l,c,hash);
						system("pkill mpg123");
						
					//Checking if it's a draw
					}else if(	hash[0][0] != '~'&&
								hash[0][1] != '~'&&
								hash[0][2] != '~'&&
								hash[1][0] != '~'&&
								hash[1][1] != '~'&&
								hash[1][2] != '~'&&
								hash[2][0] != '~'&&
								hash[2][1] != '~'&&
								hash[2][2] != '~'){

						system("clear");
						printf("\n\n\t"YELLOW BOLD REVERSE"  >>>> IT'S A DRAW. <<<<  "RESET"\n");
						printf("\tPress "BOLD"ENTER"RESET" to return.\n\n\n");
						getchar();

						//Clean the table
						hashClean(l,c,hash);
					}

				//Print the table
				hashTable(line,column,hash);
				
			}
		}
	}
}

