//Buffer clean by Major Anilton
void bufferClean(){
	char c;
	while((c = getchar()) != '\n' && c != EOF);
}

//Print table
void hashTable(short unsigned int l, short unsigned int c, unsigned char matriz[3][3]){

	system("clear");

	printf("\n\t"BOLD BLUE REVERSE"  >>>> Tic Tac Toe <<<<  "RESET);
	printf("\n\t::::::::::V 1.0::::::::::\n");

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

void hashClean(short unsigned int l, short unsigned int c, unsigned char matriz[3][3]){
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
void theMenu(unsigned char *op, unsigned char matriz[3][3]){
	// Tela de entrada
	system("clear");
	printf("\n\t"BOLD RED REVERSE"  >>>> TRALHA-TERMINAL <<<<  "RESET);
  
  if(	matriz[0][0] != '~'||
			matriz[0][1] != '~'||
			matriz[0][2] != '~'||
			matriz[1][0] != '~'||
			matriz[1][1] != '~'||
			matriz[1][2] != '~'||
			matriz[2][0] != '~'||
			matriz[2][1] != '~'||
			matriz[2][2] != '~'){
      printf("\n\n\n\t [S] "BLINK BLUE BOLD"Continue"RESET);
  }else{
    printf("\n\n\n\t [S] "BLINK BLUE BOLD"Start game"RESET);
  }
                                                             
	printf("\n\n\t [P] "BOLD"Player"RESET);
	printf("\n\n\t [H] "BOLD"History"RESET);
	printf("\n\n\t [R] "BOLD"Options"RESET);
	printf("\n\n\t [E] "BOLD"Exit\n\n\n" YELLOW"   >> "RESET);
	*op = getchar();
	bufferClean();
}
