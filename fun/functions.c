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

void limpaTabuleiro(short unsigned int l, short unsigned int c, unsigned char matriz[3][3]){
	//Limpando o tabuleiro após o player X ter ganho!
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
