//Limpa Buffer do Major Anilton
void limpabuffer(){
	char c;
	while((c = getchar()) != '\n' && c != EOF);
}

//Imprime o tabuleiro 
void tabuleiro(short unsigned int l, short unsigned int c, unsigned char matriz[3][3]){

	system("clear");

	printf("\n\t"BOLD BLUE REVERSE"  >>>> OFFLINE <<<<  "RESET);
	printf("\n\t::::::::V 1.0::::::::\n");

	//Tralha
	for(l = 0; l <= 2; l++){
		putchar('\n');
		for(c = 0; c <= 2; c++){
			putchar('\t');
			printf("  %c", matriz[l][c]);
		}
		putchar('\n');
		putchar('\n');
	}
}

//Tela inicial do jogo
void theMenu(unsigned char *op){
	// Tela de entrada
	system("clear");
	printf("\n\t"BOLD RED REVERSE"  >>>> TRALHA-TERMINAL <<<<  "RESET);
	printf("\n\n\n\t [S] "BLINK BLUE BOLD"Start Game Offline"RESET);
	printf("\n\n\t [O]"BLACK BOLD FAINT STANDOUT" Start Game Online"RESET);
	printf("\n\n\t [P] "BOLD"Player"RESET);
	printf("\n\n\t [H] "BOLD"History"RESET);
	printf("\n\n\t [R] "BOLD"Options"RESET);
	printf("\n\n\t [E] "BOLD"Exit\n\n\n" YELLOW"   >> "RESET);
	*op = getchar();
	limpabuffer();
}

//Duas funções verificadoras.
//Ambos analisam qual player ganhou o jogo
short unsigned int l,c;

void ganhadorX(unsigned char matriz[3][3],unsigned char opt){
	
		//Primeira linha X
	if(	matriz[0][0] == 'X'&&
		matriz[0][1] == 'X'&&
		matriz[0][2] == 'X'||
		//Segunda linha X
		matriz[1][0] == 'X'&&
		matriz[1][1] == 'X'&&
		matriz[1][2] == 'X'||
		//Terceira linha x
		matriz[2][0] == 'X'&&
		matriz[2][1] == 'X'&&
		matriz[2][2] == 'X'||
		//Primeira coluna X
		matriz[0][0] == 'X'&&
		matriz[1][0] == 'X'&&
		matriz[2][0] == 'X'||
		//Segunda coluna X
		matriz[0][1] == 'X'&&
		matriz[1][1] == 'X'&&
		matriz[2][1] == 'X'||
		//Terceira coluna X
		matriz[0][2] == 'X'&&
		matriz[1][2] == 'X'&&
		matriz[2][2] == 'X'||
		//Primeira diagonal
		matriz[0][0] == 'X'&&
		matriz[1][1] == 'X'&&
		matriz[2][2] == 'X'||
		//Segunda diagonal
		matriz[0][2] == 'X'&&
		matriz[1][1] == 'X'&&
		matriz[2][0] == 'X'){
		system("clear");
		printf("\n\n\tO Player "RED BOLD"X"RESET" ganhou!!");
		printf("\n\t  Continuar [Y/n]? \n\n\n   "BOLD YELLOW">>"RESET);
		opt = getchar();
		limpabuffer();

		if(tolower(opt) == 'n'){
			theMenu(&opt);
		}

		//Limpando o tabuleiro
		for(l = 0; l <= 2; l++){
			putchar('\n');
			for(c = 0; c <= 2; c++){
				putchar('\t');
				matriz[l][c] = '~';
				printf("%c", matriz[l][c]);
			}
			putchar('\n');
			putchar('\n');
		}

		//verifica se houve empate no jogo
	}else if(	matriz[0][0] != '~'&&
				matriz[0][1] != '~'&&
				matriz[0][2] != '~'&&
				matriz[1][0] != '~'&&
				matriz[1][1] != '~'&&
				matriz[1][2] != '~'&&
				matriz[2][0] != '~'&&
				matriz[2][1] != '~'&&
				matriz[2][2] != '~'){

		system("clear");
		printf("\n\n\t"RED BOLD BLINK"::::::EMPATE!::::::"RESET"\n");
		printf("\t:Pressione ENTER!!:\n\n\n");
		getchar();


		//Limpando o tabuleiro
		for(l = 0; l <= 2; l++){
			putchar('\n');
			for(c = 0; c <= 2; c++){
				putchar('\t');
				matriz[l][c] = '~';
				printf("%c", matriz[l][c]);
			}
			putchar('\n');
			putchar('\n');
		}
	}
}

void ganhadorO(unsigned char matriz[3][3], unsigned char opt){

	if(	matriz[0][0] == 'O'&&
		matriz[0][1] == 'O'&&
		matriz[0][2] == 'O'||
		//Segunda linha X
		matriz[1][0] == 'O'&&
		matriz[1][1] == 'O'&&
		matriz[1][2] == 'O'||
		//Terceira linha x
		matriz[2][0] == 'O'&&
		matriz[2][1] == 'O'&&
		matriz[2][2] == 'O'||
		//Primeira coluna X
		matriz[0][0] == 'O'&&
		matriz[1][0] == 'O'&&
		matriz[2][0] == 'O'||
		//Segunda coluna X
		matriz[0][1] == 'O'&&
		matriz[1][1] == 'O'&&
		matriz[2][1] == 'O'||
		//Terceira coluna X
		matriz[0][2] == 'O'&&
		matriz[1][2] == 'O'&&
		matriz[2][2] == 'O'||
		//Primeira diagonal
		matriz[0][0] == 'O'&&
		matriz[1][1] == 'O'&&
		matriz[2][2] == 'O'||
		//Segunda diagonal
		matriz[0][2] == 'O'&&
		matriz[1][1] == 'O'&&
		matriz[2][0] == 'O'){
		system("clear");
		printf("\n\n\tO Player "GREEN BOLD"O"RESET" ganhou!!");
		printf("\n\t  Continuar [Y/n]? \n\n\n   "BOLD YELLOW">>"RESET);
		opt = getchar();
		limpabuffer();

		if(tolower(opt) == 'n'){
			theMenu(&opt);
		}

		//Limpando o tabuleiro
		for(l = 0; l <= 2; l++){
		putchar('\n');
			for(c = 0; c <= 2; c++){
				putchar('\t');
				matriz[l][c] = '~';
				printf("%c", matriz[l][c]);
			}
			putchar('\n');
			putchar('\n');
		}

		//Verifica se houve empate no jogo
	}else if(	matriz[0][0] != '~'&&
				matriz[0][1] != '~'&&
				matriz[0][2] != '~'&&
				matriz[1][0] != '~'&&
				matriz[1][1] != '~'&&
				matriz[1][2] != '~'&&
				matriz[2][0] != '~'&&
				matriz[2][1] != '~'&&
				matriz[2][2] != '~'){

		system("clear");
		printf("\n\n\t"RED BOLD BLINK"::::::EMPATE!::::::"RESET"\n");
		printf("\t:Pressione ENTER!!:\n\n\n");
		getchar();


		//Limpando o tabuleiro
		for(l = 0; l <= 2; l++){
			putchar('\n');
			for(c = 0; c <= 2; c++){
				putchar('\t');
				matriz[l][c] = '~';
				printf("%c", matriz[l][c]);
			}
			putchar('\n');
			putchar('\n');
		}
	}



}
