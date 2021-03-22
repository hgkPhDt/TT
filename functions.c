//Limpa Buffer do Major Anilton
void limpabuffer(){
	char c;
	while((c = getchar()) != c && c != EOF);
}

//Imprime o tabuleiro 
void tabuleiro(short unsigned int l, short unsigned int c, unsigned char matriz[3][3]){

	system("clear");

	printf("\n\t::Jogo da velha::");
	printf("\n\t:::::::v1.0::::::\n");

	//Tralha
	for(l = 0; l <= 2; l++){
		putchar('\n');
		for(c = 0; c <= 2; c++){
			putchar('\t');
			printf("%c", matriz[l][c]);
		}
		putchar('\n');
		putchar('\n');
	}
}

//Duas funções verificadoras.
//Ambos analisam qual player ganhou o jogo
short unsigned int l,c;

void ganhadorX(unsigned char matriz[3][3]){
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
		printf("\n\n\tO Player "RED BOLD"X"RESET" ganhou!!\n");
		printf("\t:Pressione ENTER!!:\n\n\n");
		getchar();

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

void ganhadorO(unsigned char matriz[3][3]){

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
		printf("\n\n\tO Player "GREEN BOLD"O"RESET" ganhou!!\n");
		printf("\t:Pressione ENTER!!:\n\n\n");
		getchar();

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
