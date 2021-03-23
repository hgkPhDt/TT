void playerO(short unsigned int x, unsigned char matriz[3][3]){

//Verifica se ja tem alguma casa ocupada
if(	x == 1 && matriz[0][0] == 'X'||
	x == 2 && matriz[0][1] == 'X'||
	x == 3 && matriz[0][2] == 'X'||
	x == 4 && matriz[1][0] == 'X'||
	x == 5 && matriz[1][1] == 'X'||
	x == 6 && matriz[1][2] == 'X'||
	x == 7 && matriz[2][0] == 'X'||
	x == 8 && matriz[2][1] == 'X'||
	x == 9 && matriz[2][2] == 'X'||
	//...........................//
	x == 1 && matriz[0][0] == 'O'||
	x == 2 && matriz[0][1] == 'O'||
	x == 3 && matriz[0][2] == 'O'||
	x == 4 && matriz[1][0] == 'O'||
	x == 5 && matriz[1][1] == 'O'||
	x == 6 && matriz[1][2] == 'O'||
	x == 7 && matriz[2][0] == 'O'||
	x == 8 && matriz[2][1] == 'O'||
	x == 9 && matriz[2][2] == 'O'){
	printf("\t "RED BOLD"Oops! Aqui não."RESET);
	x = 0;
}

	//Se não tiver nenhuma casa ocupada
	//Passa para o switch e assinala a mesma
	switch(x){
		case 1:
			matriz[0][0] = 'O';
			break;
		case 2:
			matriz[0][1] = 'O';
			break;
		case 3:
			matriz[0][2] = 'O';
			break;
		case 4:
			matriz[1][0] = 'O';
			break;
		case 5:
			matriz[1][1] = 'O';
			break;
		case 6:
			matriz[1][2] = 'O';
			break;
		case 7:
			matriz[2][0] = 'O';
			break;
		case 8:
			matriz[2][1] = 'O';
			break;
		case 9:
			matriz[2][2] = 'O';

		case 0:
			
			break;
	}
}